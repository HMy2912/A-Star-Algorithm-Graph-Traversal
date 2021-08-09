#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void printVec(vector <int> vec);

void printPQ(priority_queue<vector <int>> q);

vector<vector <int>> readTheFile(string input, vector <int>& Heuristic, int& start, int& goal);

vector <int> AStar_Algo(vector<vector<int>> graph, vector <int> heu, int start, int goal);

#endif // !Header
