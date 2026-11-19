#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for (auto& x:v)
    {
        cin>>x;
    }
    vector<int>ps(n+1);
    mp[0]=1;
    int m=1;
    for (int i=0;i<n;i++)
    {
        ps[i+1]=v[i]*m+ps[i];
        mp[ps[i+1]]++;
        m*=-1;
    }
    int c=0;
    for (auto& [o,p]:mp)
    {
        if (p>1)
        {
            c+=p*(p-1)/2;
        }
    }
    cout<<c;
    return 0;

}