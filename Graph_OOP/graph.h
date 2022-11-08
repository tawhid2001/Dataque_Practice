#include<bits/stdc++.h>

using namespace std;

template<class T>
class graph
{
private:
    int V;
    vector<T> *arr;
    int **adj_matrix;
    void addEdge_adjMatrix(int,int);

public:
    graph(int);
    void addEdge(int , int);
    void adjList();
    void adjMatrix();
    void BFS(T);
    void DFS(T);
};

