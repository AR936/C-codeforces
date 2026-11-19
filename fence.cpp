#include <iostream>
#include <vector>
#define int long long
using namespace std;
signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (auto& x: v)
    {
        cin>>x;
    }
    int ms=0;
    int s=0;
    for (int i=0;i<k;i++)
    {
        s+=v[i];
    }
    ms=s;
    int ind=1;
    for(int i=k;i<n;i++)
    {
        s+=v[i];
        s-=v[i-k];
        if (s<ms)
        {
            ms=s;
            ind=i-k+2;
        }
    }
    cout<<ind;
    return 0;
}