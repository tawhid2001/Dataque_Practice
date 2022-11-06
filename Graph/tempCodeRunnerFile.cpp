vector<bool> visited(V,false);
    stack<int> s;
    s.push(start);
    visited[start]=true;
    cout<<"DFS: ";
    while (!s.empty())
    {
        int vertex = s.top();
        cout<<vertex<<" ";
        s.pop();
        for (auto i = graph[vertex].begin(); i < graph[vertex].end(); i++)
        {
            if(!visited[*i])
            {
                s.push(*i);
                visited[*i]=true;
            }
        }
        
    }