#include "graph.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    graph<int> g(7);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(2,6);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);

    g.adjList();
    g.adjMatrix();
    g.BFS(0);
    cout<<endl;
    g.DFS(0);
    return 0;
}