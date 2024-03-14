// #include <bits/stdc++.h>
// bool checkCycle(int node, unordered_map<int, bool> &visited,
//                 unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj)
// {
//     visited[node] = 1;
//     dfsVisited[node] = 1;

//     for (auto i : adj[node])
//     {
//         if (!visited[i])
//         {
//             bool cycleDetected = checkCycle(i, visited, dfsVisited, adj);
//             if (cycleDetected)
//                 return true;
//         }
//         else if (dfsVisited[i])
//         {
//             return true;
//         }
//     }
//     dfsVisited[node] = 0;
//     return false;
// }

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
// {
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adj[u].push_back(v);
//     }

//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsVisited;

//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             bool cycleFound = checkCycle(i, visited, dfsVisited, adj);
//             if (cycleFound == true)
//                 return true;
//         }
//     }
//     return false;
// }