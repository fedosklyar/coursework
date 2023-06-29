#include "Board.h"


std::pair<int, int> Board::getCoordinates() const
{
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (this->puzzles[i][j] == 0) {
				return std::pair<int, int>(i, j);
			}
		}
	}
	return std::pair<int, int>(0, 0);
}


bool Board::canGenerate(int x, int y, int pos)
{
	bool flag = false;
	switch (pos) {
	case 0: flag = y - 1 >= 0; break;
	case 1: flag = x - 1 >= 0; break;
	case 2: flag = y + 1 <= 2; break;
	case 3: flag = x + 1 <= 2; break;
	}
	return flag;
}

void Board::swapEl(int x, int y, int newX, int newY)
{
	std::swap(this->puzzles[x][y], this->puzzles[newX][newY]);
}


void Board::calculatePath(const Board& parent)
{
	this->g = parent.g + 1;
}


bool Board::operator==(const Board& rhs)
{
	for (int i = 0; i < 3; ++i) {
		if (this->puzzles[i] != rhs.puzzles[i]) {
			return false;
		}
	}
	return true;
}


int Board::getF() const
{
	return this->f;
}



void Board::printBoard()
{
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
		}
	}
}



void Board::WriteBoardInFile(std::string name) {
	std::ofstream InFile(name, std::ios::app);

	if (!InFile.is_open()) throw std::runtime_error("File didn`t open\n");

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			InFile << this->puzzles[i][j] << ' ';
		}
		InFile << std::endl;
	}
	InFile << std::endl;
	InFile.close();
}



std::vector<std::vector<int>> Board::getPuzzles() const
{
	return this->puzzles;
}