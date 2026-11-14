#include <iostream>
#include <map>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for (int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        mp[l-i-1]+=l;
    }
    int max=0;
    for (const auto& [m,d]:mp)
    {
        if (d>max)
        {
            max=d;
        }
    }
    cout<<max;
    return 0;
}