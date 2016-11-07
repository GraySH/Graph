/*
 * Graph.h
 *
 *  Created on: Nov 5, 2016
 *      Author: gray
 */

#ifndef GRAPH_H_
#define GRAPH_H_
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Graph
{
public:
	Graph();
	~Graph();

	//enumeration for vertex
	//enum class Point {A = 1, B, C, D, E, F, G, H, I, J, LAST_VERTEX};
	enum Point {A = 1, B, C, D, E, F, G, H, I, J, LAST_VERTEX};

	struct Vertex
	{
		Point from;
		Point to;
		int distance;

		Vertex(Point _from, Point _to, int _distance)
			:from(_from)
			,to(_to)
			,distance(_distance){};
	};

private:
	vector< vector<Vertex> > vec;


public:


	//initialize Graph.
	void init();

	//make vertex
	Vertex makeVertex(Point from, Point to, int distance);

	//add Edge
	void addEdge(Point from, Point to, int distance = 1 );

	//print graph information
	void printGraphInfo();

	void DepthFirstSearchShow(Point startPoint);

};



#endif /* GRAPH_H_ */
