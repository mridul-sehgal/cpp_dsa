// void dfs(int node, vector<int> adj[], unordered_map<int, bool> &visited, vector<int> &ans)
// {
//     visited[node] = 1;
//     ans.push_back(node);
//     // traverse all its neighbours
//     for (auto it : adj[node])
//     {
//         // if the neighbour is not visited
//         if (!visited[it])
//         {
//             dfs(it, adj, visited, ans);
//         }
//     }
// }

// // Function to return a list containing the DFS traversal of the graph.
// vector<int> dfsOfGraph(int V, vector<int> adj[])
// {
//     unordered_map<int, bool> visited;

//     // create a list to store dfs
//     vector<int> ans;
//     // call dfs for starting node
//     dfs(0, adj, vis, ans);
//     return ans;
// }