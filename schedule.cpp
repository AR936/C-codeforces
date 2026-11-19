#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        map<int,int>mp;
        for (int i=1;i<n+1;i++)
        {
            mp[i]=0;
        }
        for (int i=0;i<m;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int lo=0;
        int hi=2*m;
        int ans=2*m;
        while (lo<=hi)
        {
            int mid= lo+(hi-lo)/2;
            int t=0;
            int ex=0;
            for (auto& [m,k]:mp)
            {
                if (mid>=k)
                {
                    t+=mid-k;
                }
                else
                {
                    ex+=k-mid;
                }
            }
            if (2*ex>t)
            {
                lo=mid+1;
            }
            else
            {
                if (mid<ans){
                ans=mid;}
                hi=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}