#include <iostream>
#include<algorithm>
#include<vector>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int median;
    if (n%2==1)
    {
        median = v[(n+1)/2 -1];
    }
    else
    {
        median=v[(n/2)];
    }
    int cost=0;
    for (int i=0;i<n;i++)
    {
        cost+=abs(median-v[i]);
    }
    cout<<cost;
    return 0;
}