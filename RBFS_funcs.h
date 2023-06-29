#pragma once
#include "RBFS.h"
#include <forward_list>
#include <algorithm>




bool solve8PUzzle(RBFS state, std::vector<std::vector<int>> goal, int& nodes);
bool rbfs(std::forward_list<RBFS> visited, int flimit, int* prev_best, std::vector<std::vector<int>> goal, int& nodes);
bool isSolvable(const RBFS& board);