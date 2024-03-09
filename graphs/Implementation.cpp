#include <bits/stdc++.h>
using namespace std;
template<typename M> class graph {
public:
    unordered_map<M,list<M>>adj;
    void addEdge(M u,M v,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
    }

    void printList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j :i.second)
            {
                cout<<j<<" ->  ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n,m;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;

    graph<int> g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,1);
    }

    g.printList();

    return 0;
} 