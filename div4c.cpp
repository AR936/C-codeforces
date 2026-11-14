#include <iostream>
#include <vector>
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
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int> vn(n);
        int l=0, r=n-1;
        for (int i =0; i<n; i++) {
            if (i%2 == 0) {
                vn[l++]=v[i];
            } else {
                vn[r--]=v[i];
            }
        }
        int c=0;
        int m=0;
        for (int i=0;i<n;i++)
        {
            if (vn[i]>m)
            {
                m=vn[i];
                c++;
            }            
        }
        m=0;
        for (int i=n-1;i>=0;i--)
        {
            if (vn[i]>m)
            {
                m=vn[i];
                c++;
            }
        }
        if (v[n-1]==v[n-2]){
        cout<<c<<'\n';}
        else{
            cout<<c-1<<'\n';
        }
        for (int i=0;i<n;i++)
        {
            cout<<vn[i]<<' ';
        }
        cout<<'\n';

    }
    return 0;
}