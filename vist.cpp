#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>c(n);
    for (auto& x:c)
    {
        cin>>x;
    }
    sort(c.begin(),c.end());
    int co=0;
    for (int i=1;i<n;i++)
    {
        co+=c[0]+c[i];
    }
    cout<<co;
    return 0;
}