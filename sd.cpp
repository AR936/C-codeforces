#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            v[i]=in-i;
            mp[v[i]]++;
        }
        int s=0;
        for (const auto& [m,k]:mp)
        {
            if (k>1)
            {
                s+=k*(k-1)/2;
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}