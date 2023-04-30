#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
     //n is number of nodes and m is number of edges
    cin>>n>>m;

    int adj[n+1][m+1];


    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    return 0;


}