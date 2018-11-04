#include"header.h"

void main()
{
	graph g1(6);
	
	g1.AddVertex(0,'A');
	g1.AddVertex(1, 'B');
	g1.AddVertex(2, 'C');
	g1.AddVertex(3, 'D');
	g1.AddVertex(4, 'E');
	g1.AddVertex(5, 'F');
	g1.AddEdge(0, 1);
	g1.AddEdge(1, 2);
	g1.AddEdge(2, 3);
	g1.AddEdge(3, 0);
	g1.AddEdge(3, 4);
	g1.AddEdge(4, 3);
	g1.AddEdge(4, 5);
	g1.AddEdge(5, 1);
	g1.PrintEdge();
	g1.DFS();
	g1.BFS();
	_getch();
	
}