/*
 * Graph.cpp
 *
 *  Created on: Nov 5, 2016
 *      Author: gray
 */

#include "Graph.h"

Graph::Graph()
{
	init();
}

Graph::~Graph()
{

}

void Graph::init()
{
	//create vector to save vertex information.
	vec.reserve(static_cast<int>(Point::LAST_VERTEX));

}

//make Vertex
Graph::Vertex Graph::makeVertex(Point From, Point To, int distance)
{
	//create vertex
	Vertex vertex(From, To, distance);

	//cout << "test: " << vertex.from << endl;

	return vertex;
}

void Graph::addEdge(Point from, Point to, int distance )
{
	//create Vertex and save it to vertex vector
	vec[from].push_back(makeVertex(from, to, distance));

	//connect both way
	vec[to].push_back(makeVertex(to, from, distance));
}

void Graph::printGraphInfo()
{

	for(int i = 0; i < LAST_VERTEX; i++)
	{
		if(vec[i].size() != 0)
		{
			for(unsigned int j = 0; j < vec[i].size(); j++)
			{
				cout << "[" << vec[i].back().from << " => ";
				cout << vec[i].at(j).to << " ";
				cout << "(" << vec[i].back().distance << ")]";
				cout <<", ";
			}
			cout << endl;
		}

	}
}


void Graph::DepthFirstSearchShow(Point startPoint)
{
	//create list of point to check if point is already visited.
	stack<Point> vertexRoute;
	vector<int> visitedRecord;
	visitedRecord.reserve(LAST_VERTEX - 1);

	//stack database to record visited point.
	Point currentPoint = startPoint;
	vertexRoute.push(currentPoint);
	visitedRecord[currentPoint] = 1;
	bool findNextPoint = false;

	while(!vertexRoute.empty())
	{
		currentPoint = vertexRoute.top();
		cout << currentPoint << " ";
		for(int i = 0; i < vec[currentPoint].size(); i++)
		{
			//cout << vec[currentPoint][i].to << endl;
			//check if point is visited yet.
			if(visitedRecord[vec[currentPoint][i].to] == 0) //if point is not visited.
			{
				currentPoint = vec[currentPoint][i].to;
				vertexRoute.push(currentPoint);
				visitedRecord[currentPoint] = 1;
				findNextPoint = true;
				break;
			}
			else
				findNextPoint = false;

		}
		if(findNextPoint == false) //can't find next point, change VertexRoute
		{
			vertexRoute.pop();
		}

	}
}

