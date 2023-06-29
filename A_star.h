#pragma once
#include "Board.h"


class A_star : public Board {

private:

	A_star* parent;


public:
	void calculateF();
	void printPath(int &d);
	A_star(std::vector<std::vector<int>> puzzles);
	A_star(const A_star& rhs);
	A_star* generateChilds(int x, int y, int pos);

	void setParent(A_star* parent);
	void calculateHeuristic();
};