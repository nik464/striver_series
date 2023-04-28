#include<bits/stdc++.h>
using namespace std;

class Solution{
private:

void dfs( int node, vector<int>adj[], int vis[], vector<int>&l)
{
    vis[node]=1;  // i visited the node
    l.push_back(node);

    for(auto it: adj[node])
    {
        if(!vis[it])
        dfs(it, adj,vis, l);
    }
}


public:
vector<int>dfs(int V, vector<int>adj[])
{
    int vis[V]={0};

    int start=0;

    vector<int>l;

    dfs( start, adj, vis, l);

    return l;
}

};