#pragma once
#include "A_star.h"
#include <queue>
#include <string>
#include <unordered_map>
#include <functional>


int hashing(std::vector<std::vector<int>> puzzles);
int getInvCount(std::vector<std::vector<int>> puzzle);
bool isSolvable(const A_star& board);
void solve(A_star* start, const A_star* final, int &d, int &nodes);

