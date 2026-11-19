#include <iostream>
#include <vector>
#include <queue>
#define int long long 
using namespace std;
signed main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>pr(n);
    vector<vector<int>>adj(n+1);
    vector<int>kc(k);
    for (auto& x:pr)
    {
        cin>>x;
    }
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    queue<int> q;
    vector<int> distance(n+1, -1);
    q.push(1);
    distance[1] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(distance[v] ==-1)
            {
                distance[v] = 1 + distance[u];
                if (distance[v]>kc[pr[v-1]-1])
                {
                    kc[pr[v-1]-1]=distance[v];
                }
                q.push(v);
            }
        }
    }
    for (int i=0;i<k;i++)
    {
        cout<<kc[i]<<' ';
    }
    return 0;
}