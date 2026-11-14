#include <iostream>
#include <vector>
using namespace std;
#define int long long
int dfs(const vector<vector<int>>& v , int u,int n);
vector<bool>b;

signed main()
{
    int n,m;
    cin>>n>>m;
    b.assign(n+1,false);
    vector<vector<int>>v;
    v.assign(n+1,{});
    while(m--)
    {
        int f;
        cin>>f;
        vector<int>g;
        g.assign(f,0);
        if (f>0){
        for (int i=0;i<f;i++)
        {
            cin>>g[i];
        }
        for (int i=0;i<f-1;i++)
        {
            v[g[i]].push_back(g[i+1]);
        }
        v[g[f-1]].push_back(g[0]);}
    }
    for (int i=1;i<n+1;i++)
    {
        cout<<dfs(v,i,n)+1<<' ';
        b.assign(n+1,false);
    }
    return 0;
}
int dfs(const vector<vector<int>>& v , int u,int n)
{
    int sum=0;
    b[u]=true;
    for (auto& y:v[u])
    {
        if(!b[y]){
            sum++;
            b[y]=true;
            sum+=dfs(v,y,n);}
    }
    return sum;
}