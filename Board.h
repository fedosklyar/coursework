#pragma once
#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <string>



class Board {
protected:
	int h;

	int g;

	int f;

	std::vector<std::vector<int>> puzzles;
	void swapEl(int x, int y, int newX, int newY);


public:
	virtual void calculateHeuristic() = 0;
	void calculatePath(const Board& parent);
	virtual void calculateF() = 0;
	int getF() const;
	bool canGenerate(int x, int y, int pos);
	std::pair<int, int> getCoordinates()const;
	void printBoard();
	bool operator==(const Board& rhs);
	void WriteBoardInFile(std::string);
	std::vector<std::vector<int>> getPuzzles()const;

};