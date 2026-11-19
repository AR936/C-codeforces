#include<iostream>
#include<vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<int>s(n);
    vector<int>b(m);
    for (auto& x:s)
    {
        cin>>x;
    }
    for (auto& x:b)
    {
        cin>>x;
    }
    sort(s.begin(),s.end());
    sort(b.rbegin(),b.rend());
    int bi=0,si=0;
    int pr=0;
    while (bi!=m && si!=n)
    {
        if (b[bi]>=s[si])
        {
            pr+=b[bi]-s[si];
            bi++;
            si++;
        }
        else
        {
            bi++;
        }
    }
    cout<<pr;
    return 0;

}