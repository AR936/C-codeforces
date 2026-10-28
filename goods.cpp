#include <iostream>
#include<vector>
#include<map>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        string p;
        cin>>p;
        for(int i=0;i<n;i++)
        {
            v[i]= p[i]-'0';
        }
        vector<int>ps(n+1);
        vector<int>bi(n);
        map<int,int>mp;
        ps[0]=0;
        mp[0]=1;
        for(int i=1;i<n+1;i++)
        {
            ps[i]=ps[i-1]+v[i-1];
            bi[i-1]=ps[i]-i;
            mp[bi[i-1]]++;
        }

        int su=0;
        for(const auto& [m,d]:mp)
        {
            if (d>1)
            {
                su+=d*(d-1)/2;
            }
        }
        cout<<su<<'\n';      

    }
}