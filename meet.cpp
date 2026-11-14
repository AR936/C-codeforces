#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define int long long
using namespace std;
double maxt(int (n), vector<int>v,vector<int>h,double mid);
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>h(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        double mint=2e13;
        double hi=*max_element(v.begin(),v.end());
        double lo=*min_element(v.begin(),v.end());
        while (hi-lo>1e-6)
        {
            double mid= lo+ (hi-lo)/2;
            double t=maxt(n,v,h,mid);            
            if (t<mint)
            {
                mint=t;
            }
            if (t<maxt(n,v,h,mid+1e-7))
            {
                hi=mid;
            }
            else{
                lo=mid;
            }
        }
        cout<<fixed<<setprecision(10)<<(lo + (hi - lo)/2.0)<<"\n";
    }
}
double maxt(int (n), vector<int>v,vector<int>h,double mid)
{
            double t=0;
            double x=0;
            for (int i=0;i<n;i++)
            {
                x=abs(mid-v[i])+h[i];
                if (x>t)
                {
                    t=x;
                }
            }
            return t;
}
