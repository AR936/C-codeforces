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
    while(t--)
    {
        int n;
        cin>>n;
        string p;
        cin>>p;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            v[i]=p[i]-96;
        }
        map<int,int>m;
        for (int i=1;i<27;i++)
        {
            m[i]=i;
        }
        int c=0;
        for (int i=0;i<n/2;i++)
        {
            if (m[v[i]]!=m[v[n-1-i]])
            {
                int k=max(m[v[n-1-i]],m[v[i]]);
                int lk=min(m[v[n-1-i]],m[v[i]]);
                c+=k-lk;
                m[k]=m[lk];
            }
        }
        cout<<c<<'\n';

    }
    return 0;

}