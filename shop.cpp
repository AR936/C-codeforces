#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int n,q;
    cin>>n>>q;
    int s=0;
    vector<int>w(n);
    for (auto& x:w)
    {
        cin>>x;
        s+=x;
    }
    sort(w.rbegin(),w.rend());
    vector<int>ps(n+1);
    for (int i=1;i<n+1;i++)
    {
        ps[i]=ps[i-1]+w[i-1];
    }
    while (q--)
    {
        
        int qu;
        cin>>qu;
        cout<<2*ps[qu]-s<<'\n';
    }
    return 0;
}