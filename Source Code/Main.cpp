#include "Header.h"

int main() {
	//vector <vector <int>> graph = {
	//	{0, 0, 2, 0, 3, 0, 5, 0} ,
	//	{0, 0, 5, 7, 7, 2, 7, 0},
	//	{2, 5, 0, 0, 3, 0, 11, 0},
	//	{0, 7, 0, 0, 0, 0, 0, 3},
	//	{3, 7, 3, 0, 0, 0, 11, 2},
	//	{0, 2, 0, 0, 0, 0, 7, 0},
	//	{5, 7, 11, 0, 11, 7, 0, 0},
	//	{0, 0, 0, 3, 2, 0, 0, 0}
	//};
	//vector <int> heu = { 7, 0, 1, 0, 5, 3, 9, 5};

	//vector <int> vec = AStar_Algo(graph, heu, 0, 1);
	vector <int> heu;
	int start = -1, goal = -1;
	vector <vector <int>> Graph = readTheFile("input.txt", heu, start, goal);
	cout << "Start: " << start << endl << "Goal: " << goal << endl << "Heuristics: ";
	printVec(heu);
	cout << "Graph - Adjacency Matrix: " << endl;
	for (auto i : Graph)
		printVec(i);

	vector <int> result = AStar_Algo(Graph, heu, start, goal);
	cout << "Path: ";
	printVec(result);
	return 0;
}