#include<iostream>
#include<utility>
#include<vector>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        int lo=0;
        int hi=1e9;
        double pos=0;
        double ans=1e9;
        while (lo<=hi)
        {
            int var=0;
            int mid=(double)lo+(double)(hi-lo)/2;
            for (int i=0;i<n;i++)
            {
                pos+=mid;
                if (pos<v[i].first)
                {
                    var=1;
                    break;
                }
                else if (pos>v[i].second)
                {
                    pos=v[i].second;
                }
            }
            if (var==1)
            {
                lo=mid+1;
            }
            else
            {
                if (mid<ans)
                {
                    ans=mid;
                    hi=mid-1;
                }
            }

        }
        cout<<ans<<'\n';
    }
}