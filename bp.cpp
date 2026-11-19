#include <iostream>
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
        int lo=1;
        int hi=2e9;
        int ans=0;
        while (lo<=hi)
        {
            int mid= lo+(hi-lo)/2;
            if (mid*(mid+1)/2 <= n)
            {
                if (mid>ans){
                ans=mid;}
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}