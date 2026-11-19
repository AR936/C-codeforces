#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define int long long
using namespace std;
pair<int,int> dfs(vector<vector<int>> adj,vector<bool>& b, int i,vector<int>v);
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        vector<vector<int>>adj(n+1);
        vector<bool>b;
        b.assign(n+1,false);
        
        int tot=0;
        for (auto& x:v)
        {
            cin>>x;
            tot+=x;
        }
        while (m--)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);  
            adj[b].push_back(a);
        }
        if (tot%n!=0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        int a=1;
        for (int i=1;i<n+1;i++)
        {
           if (!b[i]){ 
            pair<int,int> p= dfs(adj,b,i,v);
           if((tot/n) * p.first!= p.second)
           {
            cout<<"NO"<<'\n';
            a=0;
            break;
           }}
        }
        if (a){
        cout<<"YES"<<'\n';}


    }
    return 0;
}

pair<int,int> dfs(vector<vector<int>> adj,vector<bool>& b,int i,vector<int>v)
{
        int n=0;
        int c=0;
        if (!b[i])
        {
            b[i]=true;
            n=1;
            c=v[i-1];
        
            for (auto& x:adj[i])
            {            
                if (!b[x]){
                pair<int,int> p=dfs(adj,b,x,v);
                n+=p.first;
                c+=p.second;}
            }
            
        }
        return {n,c};
    
}