#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long 
signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        int k;
        cin>>k;
        cout << upper_bound(v.begin(),v.end(),k)-v.begin()<<'\n';
    }
    return 0;
}