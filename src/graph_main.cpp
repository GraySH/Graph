//============================================================================
// Name        : graph_main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Graph.h"

using namespace std;


int main()
{
	Graph graph;

//	graph.addEdge(Graph::A, Graph::B);
//	graph.addEdge(Graph::A, Graph::C);
//	graph.addEdge(Graph::B, Graph::A);
//	graph.addEdge(Graph::B, Graph::D);
//	graph.addEdge(Graph::C, Graph::A);
//	graph.addEdge(Graph::C, Graph::D);
//	graph.addEdge(Graph::D, Graph::B);
//	graph.addEdge(Graph::D, Graph::C);
//	graph.addEdge(Graph::D, Graph::E);
//	graph.addEdge(Graph::D, Graph::F);
//	graph.addEdge(Graph::E, Graph::D);
//	graph.addEdge(Graph::E, Graph::F);
//	graph.addEdge(Graph::F, Graph::D);
//	graph.addEdge(Graph::F, Graph::E);


	graph.addEdge(Graph::A, Graph::B, 4);
	graph.addEdge(Graph::A, Graph::C, 3);
	graph.addEdge(Graph::B, Graph::D, 8);
	graph.addEdge(Graph::C, Graph::D, 4);
	graph.addEdge(Graph::D, Graph::E, 7);

	graph.DepthFirstSearchShow(Graph::A);
	cout << endl;

	graph.findShortestPath(Graph::A);

	return 0;
}

