#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
int dfs(int n1,int n2,vector<vector<int>>&v,vector<bool>&t);
signed main()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<vector<int>>v;
    vector<bool>t;
    while (k--)
    {
        int a,b;
        cin>>a>>b;
        for (int i=min(a,b);i<=max(a,b);i++)
        {
            v[a].push_back(i);
            v[i].push_back(a);
        }
    }
    while (q--)
    {
        int c,d;
        cin>>c>>d;
        t.assign(n+1,false);
        if (c==d)
        {
            cout<<"YES"<<'\n';
            continue;
        }
        int ans= dfs(c,d,v,t);
        if (ans)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}

int dfs(int n1,int n2,vector<vector<int>>&v,vector<bool>&t)
{
    if (!t[n1])
    {
        t[n1]=true;
        for (auto& x:v[n1])
        {
            if (x==n2)
            {
                return 1;
            }
            else
            {
               if( dfs(x,n2,v,t))
               {
                return 1;
               }
               else
               {
                continue;
               }
            }
        }
    }
    return 0;
}