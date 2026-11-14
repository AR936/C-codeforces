#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
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
        map<int,int>mp;
        bool y=true;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            if (mp[v[i]]>1)
            {
                y=false;
            }
        }
        if (y)
        {
            sort(v.rbegin(),v.rend());
            for (int i=0;i<n;i++)
            {
                cout<<v[i]<<' ';
            }
        }
        else
        {
            cout << -1;
        }
        cout<<'\n';
    }
    return 0;
}