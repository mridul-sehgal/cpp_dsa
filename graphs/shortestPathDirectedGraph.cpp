#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << "), ";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = 1;
        for (auto i : adj[node])
        {
            if (!visited[i.first])
            {
                dfs(i.first, visited, s);
            }
        }
        s.push(node);
    }

    void getShortestPath(int src, vector<int> &distance, stack<int> &s)
    {
        
        while (!s.empty())
        {
            
            int top = s.top();
            s.pop();
            if (distance[top] != INT_MAX)
            {

                for (auto i : adj[top])
                {
                    if (distance[top] + i.second < distance[i.first])
                    {
                        distance[i.first] = distance[top] + i.second;
                    }
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    g.printAdj();

    int n = 6;
    unordered_map<int, bool> visited;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }

    int src = 1;
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[src] = 0;

    g.getShortestPath(src, dist, s);
    cout << "Answer is: " << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}