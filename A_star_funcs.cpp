#include "A_star_funcs.h"

int hashing(std::vector<std::vector<int>> puzzles) {
	std::string result;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::string tmp = std::to_string(puzzles[i][j]);
			result += tmp;
		}
	}
	return std::hash<std::string>{}(result);

}


int getInvCount(std::vector<std::vector<int>> puzzle) {
	std::vector<int> tmp(9);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			tmp[i * 3 + j] = puzzle[i][j];
			
		}
	}
	int inversions = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (tmp[j] && tmp[i] && tmp[i] > tmp[j])
				++inversions;
		}
	}
	return inversions;
}

bool isSolvable(const A_star& board) {
	std::vector<std::vector<int>> puzzle = board.getPuzzles();
	int count = getInvCount(puzzle);
	return count % 2 == 0;
}

void solve(A_star* start, const A_star* final, int& d, int &nodes) {
	if (!isSolvable(*start)) {
		return;
	}


	std::priority_queue<A_star*, std::vector<A_star*>, std::function<bool(A_star*, A_star*)>> q(
		[](A_star* lhs, A_star* rhs) { return lhs->getF() > rhs->getF(); }
	);

	std::unordered_map<int, std::vector<std::vector<int>>> visited;

	start->calculateHeuristic();
	start->calculateF();
	q.push(start);

	

	while (!q.empty()) {
		++nodes;

		A_star* min = q.top();
		q.pop();
		min->printBoard();
		int key = hashing(min->getPuzzles());
		visited[key] = min->getPuzzles();

		if (*min == *final) {
			min->printPath(d);
			return;
		}
		for (int i = 0; i < 4; ++i) {
			std::pair<int, int> coord = min->getCoordinates();
			if (min->canGenerate(coord.first, coord.second, i)) {
				A_star* tmp = min->generateChilds(coord.first, coord.second, i);
				tmp->setParent(min);
				tmp->calculateHeuristic();
				tmp->calculatePath(*min);
				tmp->calculateF();
				int tmpKey = hashing(tmp->getPuzzles());
				if (visited.find(tmpKey) == visited.end()) {
					q.push(tmp);
					visited[tmpKey] = tmp->getPuzzles();
				}
			}
		}
	}
}