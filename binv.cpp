#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>o=v;
        vector<int>z=v;
        for (int i=0;i<n;i++)
        {
            if (o[i]==0)
            {
                o[i]=1;
                break;
            }
        }
        for (int i=n-1;i>-1;i--)
        {
            if (z[i]==1)
            {
                z[i]=0;
                break;
            }
        }
        long long c1=0,c2=0,c3=0;
        long long inv1=0,inv2=0,inv3=0;
        for (int i=n-1;i>-1;i--)
        {
            if (o[i]==0)
            {
                c1++;
            }
            else
            {
                inv1+=c1;
            }
        }
        for (int i=n-1;i>-1;i--)
        {
            if (z[i]==0)
            {
                c2++;
            }
            else
            {
                inv2+=c2;
            }
        }
        for (int i=n-1;i>-1;i--)
        {
            if (v[i]==0)
            {
                c3++;
            }
            else
            {
                inv3+=c3;
            }
        }
       cout << max({inv1,inv2,inv3})<<'\n';
    }
}