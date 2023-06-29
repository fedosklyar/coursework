#pragma once
#include "A_star_funcs.h"


class RBFS : public Board {
    static int depth;

    RBFS* parent;
public:
    RBFS();
    RBFS(std::vector<std::vector<int>>);
    RBFS(const RBFS& copy);
    void calculateF();
    void calculateHeuristic();
    void setF(int value);
    RBFS operator=(const RBFS& temp);
    void operator++();
    void operator--();
    RBFS* generateChilds(int x, int y, int pos);
    int getDepth();
};
