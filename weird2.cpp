#include <iostream>
#include <vector>
#define int long long
using namespace std;
signed main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int hi=2e9;
        int lo=1;
        int ans=0;
        int p;
        cin>>p;
        while (lo<=hi)
        {
            
            int mid= lo + (hi-lo)/2 ;
            if (p>=mid*(mid+1)/2)
            {
                lo=mid+1;
                ans=mid;
            }
            else{
                hi=mid-1;
            }
        }        
        cout<<ans<<'\n';
    }
}