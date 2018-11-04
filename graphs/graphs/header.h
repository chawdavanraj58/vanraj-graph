#include<conio.h>
#include<iostream>

using namespace std;

class graph
{
	bool visited;
	int size;
	typedef struct vertex
	{
		char verName;
		bool visited;
	}vertex;

	vertex *arr;
	int edge[6][6];
public:
	graph(int size);
	void AddVertex(int,char);
	void AddEdge(int ,int);
	void PrintEdge();
	void DFS();
	void BFS();
};


