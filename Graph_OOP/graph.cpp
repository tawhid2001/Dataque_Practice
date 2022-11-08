#include "graph.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>
graph<T>::graph(int vertex)
{
    this->arr = new vector<T>[vertex];
    this->V = vertex;

    // Allocate 2d array for adj matrix

    this->adj_matrix = new int *[vertex];
    for (int i = 0; i < vertex; i++)
        this->adj_matrix[i] = new int[vertex];

    // Initialize the 2d array with 0

    for (int i = 0; i < this->V; i++)
    {
        for (int j = 0; j < this->V; j++)
        {
            this->adj_matrix[i][j] = 0;
        }
    }
}

template <class T>
void graph<T>::addEdge(int u, int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
    this->addEdge_adjMatrix(u, v);
}

template <class T>
void graph<T>::addEdge_adjMatrix(int u, int v)
{
    this->adj_matrix[u][v] = 1;
    this->adj_matrix[v][u] = 1;
}

template <class T>
void graph<T>::adjList()
{
    cout << "Adjency List: " << endl;
    for (int i = 0; i < this->V; i++)
    {
        cout << i;
        for (int j = 0; j < this->arr[i].size(); j++)
        {
            cout << "->" << this->arr[i][j];
        }
        cout << endl;
    }
}

template <class T>
void graph<T>:: adjMatrix()
{
    cout<<"Adjacnny Matrice: "<<endl;
    for (int i = 0; i < this->V; i++)
    {
        for (int j = 0; j < this->V; j++)
        {
            cout<<this->adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

template<class T>
void graph<T>::BFS(T start)
{
    vector<bool> visited(this->V,false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    cout<<"BFS: ";
    while (!q.empty())
    {
        int vertex = q.front();
        cout<<vertex<<" ";
        q.pop();
        for (auto i = this->arr[vertex].begin(); i != this->arr[vertex].end(); i++)
        {
            if(!visited[*i])
            {
                q.push(*i);
                visited[*i]=true;
            }
        }
        
    }
}

template <class T>
void graph<T>::DFS(T start)
{
    vector<bool> visited(this->V,false);
    stack<int> s;
    s.push(start);
    visited[start]=true;
    cout<<"DFS: ";
    while (!s.empty())
    {
        int vertex = s.top();
        cout<<vertex<<" ";
        s.pop();
        for (auto i = this->arr[vertex].begin(); i < this->arr[vertex].end(); i++)
        {
            if(!visited[*i])
            {
                s.push(*i);
                visited[*i]=true;
            }
        }
        
    }
}