#include <iostream>
#include <vector>
using namespace std;
#define int long long 
signed main()
{
    int n;
    cin>>n;
    vector<int>d;
    d.assign(n+1,1);
    vector<vector<int>>v;
    v.assign(n+1,{});
    int m=0;
    for (int i=1;i<n+1;i++)
    {
        int k;
        cin>>k;

        if (!(k==-1))
        {
            v[k].push_back(i);
        }
    }
    cout<<m;
}