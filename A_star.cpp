#include "A_star.h"


A_star::A_star(std::vector<std::vector<int>> puzzles)
{
	this->puzzles = puzzles;
	this->f = 0;
	this->g = 0;
	this->h = 0;
	this->parent = nullptr;
}

A_star::A_star(const A_star& rhs)
{
	this->puzzles = rhs.puzzles;
	this->parent = nullptr;
	this->h = 0;
	this->g = 0;
	this->f = 0;
}


A_star* A_star::generateChilds(int x, int y, int pos)
{
	std::pair<int, int> coord = this->getCoordinates();
	A_star* newBoard = new A_star(*this);
	switch (pos) {
	case 0: {
		A_star* newBoard = new A_star(*this);
		newBoard->swapEl(x, y, x, y - 1);
		return newBoard;
		break;
	}
	case(1): {
		A_star* newBoard = new A_star(*this);
		newBoard->swapEl(x, y, x - 1, y);
		return newBoard;
		break;
	}
	case(2): {

		A_star* newBoard = new A_star(*this);
		newBoard->swapEl(x, y, x, y + 1);
		return newBoard;
		break;

	}
	case(3): {
		A_star* newBoard = new A_star(*this);
		newBoard->swapEl(x, y, x + 1, y);
		return newBoard;
		break;

	}
	}
	return newBoard;
}



void A_star::setParent(A_star* parent)
{
	this->parent = parent;
}



void A_star::calculateF()
{
	this->f = this->g + this->h;
}


void A_star::printPath(int &d)
{	++d;
	if (this->parent == nullptr) {
		this->WriteBoardInFile("File.txt");
		this->printBoard();
		return;
	}
	this->parent->printPath(d);
	this->WriteBoardInFile("File.txt");
	this->printBoard();
}


void A_star::calculateHeuristic()
{
	int distance = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int value = this->puzzles[i][j];
			if (value != 0) {
				int targetRow = (value - 1) / 3;
				int targetCol = (value - 1) % 3;
				distance += abs(i - targetRow) + abs(j - targetCol);
			}
		}
	}
	this->h = distance;
}