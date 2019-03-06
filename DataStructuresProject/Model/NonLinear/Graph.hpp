//
//  Graph.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 3/4/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //graph operations
    void addVertex(const Type& value);
    
    //Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeConst(int source, int target, int cost);
    //Disconnect vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    //Check the connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};

template <class Type>
const int Graph<Time> :: MAXIMUM;

//Constructor
template <class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}

/*
Can't remove from an array in C++
So can't remove from a Graph
No remove() method
*/

/*Accessors*/

template <class Type>
int Graph<Type> :: size()
{
    return vertexCount;
}

//Left side operator
//Returns reference to the value given, and can change it as needed
template <class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//Right side operator
//Copies value at the given index and returns it
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

/*Adding Vertices*/

//Adding a vertex
//If the graph is not fll, assigns adjacency matrix index to be the current vertex count
//Sets values attached to the index false and stores the item in the array
template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount < MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}

/*Adding Edges*/

//Adds a directed edge
template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacentyMatrix[source][target] = true;
}

//Adds an undirected edge
template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

//Adds weighted(undirected) graph
template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target <vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}

/*Removing Edges*/

template <class Type>
{
    void Graph<Type> :: removeEdge < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}

//Removes a weighed(undirected) edge
template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target <= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}

//Removes an undirected edge
template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 & source < vertexCount && target >=  && target < vertexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMatrix[target][source] = 0;
}


/*Connection Checks*/

template <class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    isAnEdge = adjacencyMatrix[source][target] || adjacencyMatrix[target][source];
    return isAnEdge;
}

template <class Type>
bool Graph<Type> :: areConnected(it source, int target) const
{
    assert(source >= 0 && source < vertexCount && target <= 0 target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target]
    return isAnEdge;
}

//Identifies the connections of the matrix
template <class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < vertexCount);
    std::set<int> vertexNeighbors;
    
    for(int index = 0; index < vertexCount; index++)
    {
        if(adjacencyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return vertexNeighbors;
}

/*Traversals*/

//Depth first - recursive
template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    bool visitedVerticies[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(visitedVertices, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, visitedVertices);
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
    {
        if(!visited[*setIterator])
        {
            depthFirstTraversal(currentGraph, *setIterator, visted);
        }
    }
}

//Breadth First - Iterative
template <class Type>
void Graph<Type> :: breadthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited,currentGraph.size(),false);
    visited[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while(!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                visted[*setIterator] = true;
                cout << currentGraph[*setIterator] << endl;
                vertexQueue.push(*setIterator);
            }
        }
    }
}

//Cost accruing (breadth first)
template <class Type>
int Graph<Type> :: costTraversal(Graph<Type> & currentGraph, int start)
{
    assert(start >= 0 && start < vertexCount);
    int cost = 0;
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited.currentGraph.size(),false);
    visited[start] = true;
    
    vertexQueue.push(start);
    while (!vertexQueue.empty())
    {
        int currentIndex = vertexQueue.front();
        connections = currentGraph.neighbors(currentIndex);
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                cost += weightCostMatrix[currentIndex][*setIterator];
                visited[*setIterator] = true;
                vertexQueue.push(*setIterator);
            }
        }
    }
    return cost;
}

#endif /* Graph_hpp */
