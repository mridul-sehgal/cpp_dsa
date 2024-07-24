// #include <bits/stdc++.h>
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
// {
//     unordered_map<int, list<pair<int, int>>> adj;
//     for (int i = 0; i < edges; i++)
//     {
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2]; // weight
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }

//     vector<int> dist(vertices);
//     for (int i = 0; i < vertices; i++)
//     {
//         dist[i] = INT_MAX;
//     }

//     set<pair<int, int>> st;
//     dist[source] = 0;
//     st.insert(make_pair(0, source));

//     while (!st.empty())
//     {
//         auto top = *(st.begin());
//         int nodeDistance = top.first;
//         int topNode = top.second;

//         st.erase(st.begin());
//         for (auto i : adj[topNode])
//         {
//             if (nodeDistance + i.second < dist[i.first])
//             {
//                 auto record = st.find(make_pair(dist[i.first], i.first));
//                 if (record != st.end())
//                 {
//                     st.erase(record);
//                 }

//                 dist[i.first] = nodeDistance + i.second;
//                 st.insert(make_pair(dist[i.first], i.first));
//             }
//         }
//     }
//     return dist;
// }

// ************code line 26***********

    // 1) st.begin() - This returns an iterator pointing to the first element in the set st.

    // 2) *(st.begin()) - Dereferences the iterator, giving you the value it points to. 
    //                     Since st is a set of pairs (set<pair<int,int>>), dereferencing it gives you the first pair in the set.
    // 3)auto top - Using auto here means that the type of top will be automatically deduced by the compiler 
    //             to match the type of the first element in the set.



// moreover in a set the pairs are stored in ascending order based on their first elements. 
// For pairs with the same first element, the order is determined by the second element.