#include <iostream>
#include<vector>
using namespace std;
#define int long long
vector<vector<int>>v;
vector<bool>b;
void dfs(int u);
signed main()
{
    int n,t;
    cin>>n>>t;
    
    v.assign(n+1,{});
    for (int i=1;i<n;i++)
    {
        int k;
        cin>>k;
        v[i].push_back(i+k);
    }
    b.assign(n+1,false);
    dfs(1);
    if (b[t])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
void dfs(int u)
{
    for (auto& m:v[u])
    {
        if (!b[m])
        {
            b[m]=true;
            dfs(m);
        }
    }
}