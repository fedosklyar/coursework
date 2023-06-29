#include "RBFS_funcs.h"


bool solve8PUzzle(RBFS state, std::vector<std::vector<int>> goal, int &nodes) {
    std::forward_list<RBFS> visited;
    visited.push_front(state);
    int default_best = 0;

    return rbfs(visited, INT_MAX, nullptr, goal, nodes);
}


bool isSolvable(const RBFS& board) {
    std::vector<std::vector<int>> puzzle = board.getPuzzles();
    int count = getInvCount(puzzle);
    return count % 2 == 0;
}




bool rbfs(std::forward_list<RBFS> visited, int flimit, int* prev_best, std::vector<std::vector<int>> goal, int& nodes) { //int &depth){ //зніс покажчик, треба подивитися, як воно без нього...
    if (visited.front().getDepth() == 0 && !isSolvable(visited.front()))
    {
        return false;
    }

    typedef std::pair<RBFS, int> successor_cost;

    auto& top = visited.front();

    if (top.getPuzzles() == goal) {
        std::forward_list<RBFS> inFile;
        while (!visited.empty()) {
            inFile.push_front(visited.front());
            visited.pop_front();
        }

        while (!inFile.empty()) {
            ++nodes;
            inFile.front().WriteBoardInFile("RBFS_File.txt");
            std::cout << std::endl;
            inFile.pop_front();
        }
        return true;
    }

    successor_cost successors[4];
    int s_count = 0;
    for (int i = 0; i < 4; i++) {
        successors[s_count].first = top;
        RBFS temp = successors[s_count].first;
        temp.printBoard();
        std::pair <int, int> coord = temp.getCoordinates();

        if (temp.canGenerate(coord.first, coord.second, i))
        {
            RBFS* suc_sor = temp.generateChilds(coord.first, coord.second, i);
            suc_sor->printBoard();

            if (find(visited.begin(), visited.end(), *suc_sor) != visited.end()) {
                continue;
            }
            successors[s_count].first = suc_sor->getPuzzles();
            successors[s_count].first.calculateHeuristic();
            successors[s_count].second = successors[s_count].first.getF() + successors[s_count].first.getDepth();
            successors[s_count].first.setF(successors[s_count].second);
            ++s_count;
        }
    }


    if (s_count == 0) {
        *prev_best = INT_MAX;
        return false;
    }
    if (s_count == 1) {
        visited.push_front(successors[0].first);
        ++successors[0].first;
        auto res = rbfs(visited, flimit, prev_best, goal, nodes);
        if (res == true) return res;

        --successors[0].first;
        visited.pop_front();
        return res;
    }


    while (true) {

        std::sort(successors, successors + s_count,
            [](const successor_cost A, const successor_cost B)
            { return A.second < B.second; });

        successor_cost& best = successors[0];
        best.first.calculateHeuristic();
        best.first.setF(best.second);

        best.first.printBoard();
        if (best.first.getF() > flimit) {
            visited.front().printBoard();
            *prev_best = best.first.getF();
            return false;
        }

        visited.push_front(best.first);
        successors[1].first.setF(successors[1].second);


        ++successors[1].first;


        if (rbfs(visited, std::min(flimit, successors[1].first.getF()), &best.second, goal, nodes) == true) {
            return true;
        }

        --successors[1].first;
        visited.pop_front();
    }
}