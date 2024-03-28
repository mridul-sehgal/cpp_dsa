#include <bits/stdc++.h>
using namespace std;

void makeSet(vector<int> &parent, vector<int> &rank, int size)
{
    for (int i = 0; i < size; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node)
{
    if (parent[node] = node)
    {
        return node;
    }

    return parent[node] = findParent(parent, parent[node]); // path compression
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[u] = v;
        rank[u]++;
    }
}

int main()
{
    int n = 2;
    vector<int> parent;
    vector<int> rank;
    makeSet(parent, rank, 2);
    unionSet(1, 2, parent, rank);
    return 0;
}