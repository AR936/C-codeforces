#include <iostream>
#include <vector>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int m=0;
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for (int i=1;i<n;i++)
    {
        if (v[i]<v[i-1])
        {
            int d=v[i-1]-v[i];
            v[i]+=d;
            m+=d;
        }
    }
    cout<<m;
}