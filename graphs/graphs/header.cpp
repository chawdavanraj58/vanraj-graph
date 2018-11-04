#include "header.h"

graph::graph(int size)
{
	this->size = size;
	arr = new vertex[size];
	edge[6][6] = NULL;
}

void graph::AddVertex(int loc, char VerName)
{
	arr[loc].verName = VerName;
	arr[loc].visited = 0;
}

void graph::AddEdge(int Start,int End)
{
	edge[Start][End] = 1;
}

void graph::PrintEdge()
{
	cout << endl << "  ";
	for (int k = 0; k < 6; k++) //vertex that displays horizontally //
	{
		cout << arr[k].verName << " ";
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i].verName << " ";     // vertex that are displayed vertically
		for (int j = 0; j < 6; j++)
		{
			
			cout << edge[i][j] <<" "; //edge data//
		}
		cout << endl;
	}
}

void graph::DFS()
{
	vertex *copy = arr;
	char stack[10];
	int top = -1;
	int v = 0;
	stack[++top] = copy[v].verName;
	arr[0].visited = 1;
	cout << endl  << "DFS:: ";
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 6; i++)
		{

			if (edge[v][i] == 1 && copy[i].visited == 0)
			{
				stack[++top] = copy[i].verName;
				copy[i].visited = 1;
				v = i;
			}
		}
	}

	while (top != -1)
	{
		cout <<" "<< stack[top--];
	}
	cout << endl;
}

void graph::BFS()
{
	char queue[10];
	int front = -1, rear = -1;
	vertex *copy = arr;
	int v = 0;
	queue[++rear] = copy[v].verName;

	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			if (edge[v][i] == 1 && copy[i].visited == 1)
			{
				
				queue[++rear] = copy[v].verName;
				copy[i].visited = 0;
				v = i;

			}
		}
	}

	cout << "BFS:: ";
	while(rear != -1)
	{
		cout << copy[++front].verName << " ";
		rear--;
	}
	cout << endl;
}


