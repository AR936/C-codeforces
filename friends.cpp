#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    while (m--)
    {
        int j,k;
        cin>>j>>k;
        v[j-1]++;
        v[k-1]++;
    }
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
}