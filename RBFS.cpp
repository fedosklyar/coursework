#include "RBFS.h"


RBFS::RBFS() {
    this->f = 0;
    this->h = 0;
}


void RBFS::calculateF() {
    this->f = this->h + this->depth;
}



void RBFS::calculateHeuristic()
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
    this->f = distance;
}


void RBFS::setF(int value) {
    this->f = value;
}


RBFS RBFS::operator=(const RBFS& temp) {
    this->puzzles = temp.puzzles;
    this->h = temp.h;
    this->f = temp.f;
    return *this;
}

RBFS::RBFS(std::vector<std::vector<int>> puzzle) {
    this->f = 0;
    this->h = 0;
    this->puzzles = puzzle;
}



void RBFS::operator++() {
    depth += 1;
    return;
}


void RBFS::operator--() {
    depth -= 1;
    return;
}

int RBFS::getDepth() {
    return RBFS::depth;
}


RBFS* RBFS::generateChilds(int x, int y, int pos)
{
    std::pair<int, int> coord = this->getCoordinates();
    RBFS* newBoard = new RBFS(*this);
    switch (pos) {
    case 0: {
        RBFS* newBoard = new RBFS(*this);
        newBoard->swapEl(x, y, x, y - 1);
        return newBoard;
        break;
    }
    case(1): {
        RBFS* newBoard = new RBFS(*this);
        newBoard->swapEl(x, y, x - 1, y);
        return newBoard;
        break;
    }
    case(2): {

        RBFS* newBoard = new RBFS(*this);
        newBoard->swapEl(x, y, x, y + 1);
        return newBoard;
        break;

    }
    case(3): {
        RBFS* newBoard = new RBFS(*this);
        newBoard->swapEl(x, y, x + 1, y);
        return newBoard;
        break;

    }
    }
    return newBoard;
}


RBFS::RBFS(const RBFS& copy) {
    this->puzzles = copy.puzzles;
    this->h = 0;
    this->f = 0;
}

