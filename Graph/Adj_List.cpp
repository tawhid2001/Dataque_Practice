#include <iostream>
#include<vector>
using namespace std;

#define v 5


void addEdge(vector<int> graph[], int a, int b)
{
    graph[a].push_back(b);
}

void adjList(vector<int> graph[])
{
    cout<<"Adjency List: "<<endl;
    for (int i = 0; i < v; i++)
    {
        cout<<i;
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout<<"->"<<graph[i][j];
        }
        cout<<endl;
    }
    
}

int main()
{
    vector<int> graph[v];
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

    adjList(graph);

    return 0;
}