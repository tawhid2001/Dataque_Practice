#include <iostream>
using namespace std;

#define v 5

void addEdge(int graph[v][v], int a, int b)
{
    graph[a][b]= 1;
}

void adjMatrice(int graph[v][v])
{
    cout<<"Adjacnny Matrice: "<<endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int graph[v][v]={0};

    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,0);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,1);
    addEdge(graph,2,3);
    addEdge(graph,3,1);
    addEdge(graph,3,2);
    addEdge(graph,3,4);
    addEdge(graph,4,0);
    addEdge(graph,4,1);
    addEdge(graph,4,3);

    adjMatrice(graph);

    return 0;
}