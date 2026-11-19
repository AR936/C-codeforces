#include <iostream>
#include <vector>
#include<algorithm>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<int>lv(q);
        vector<int>rv(q);
        vector<int>xv(q);
        for (int i=0;i<q;i++)
        {
            int l,r,x;
            cin>>l>>r>>x;
            if (x==1)
            {
                v[l-1]=1;
                v[r-1]=1;
            }
            lv[i]=l-1;
            rv[i]=r-1;
            xv[i]=x;

        }
        bool d=true;
        for (int i=0;i<q;i++)
        {
            if (v[lv[i]]*v[rv[i]]!=xv[i])
            {
                d=false;
                break;
            }
        }
        if (d)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}