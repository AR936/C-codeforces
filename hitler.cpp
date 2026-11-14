#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define int long long
signed main()
{
    int n,m;
    cin>>n>>m;
    int t=0;
    vector<vector<int>>l(n+1);
        
    while (m--)
    {
        int u,e;
        cin>>u>>e;
        l[u].push_back(e);
        l[e].push_back(u);
    }
    queue<int>q;
    vector<int>distance(n+1, -1);
    q.push(1);
    distance[1] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : l[u]){
            if(distance[v] ==-1){
                distance[v] = 1 + distance[u];
                q.push(v);
            }
        }

    }
    for (int i=1;i<n+1;i++)
    {

        cout << distance[i]<<' ';
    }
    return 0;
    
   

}