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
        int hi=1e12;
        int lo=0;
        int ans=0;
        int p;
        cin>>p;
        while (lo<hi)
        {
            
            int mid= lo + (hi-lo)/2 ;
            if (2*(p+1)>=mid*(mid+1))
            {
                hi=mid;
                ans=mid;
            }
            else{
                lo=mid;
            }
        }        
        cout<<ans<<'\n';
    }
}