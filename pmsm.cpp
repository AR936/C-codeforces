#include <iostream>
#include <vector>
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>b(n);
        for (int i=0;i<n;i++)
        {
            b[i]=0;}
        int mi=v[0];
        int ma=v[n-1];
        for (int i=0;i<n;i++)
        {
            if (v[i]<=mi)
            {
                mi=v[i];
                b[i]=1;
            }
            if (v[n-1-i]>=ma)
            {
                ma=v[n-1-i];
                b[n-1-i]=1;
            }
        }
        for (int i=0;i<n;i++)
        {   
            cout<<b[i];
        }
        cout<<'\n';
    }
}