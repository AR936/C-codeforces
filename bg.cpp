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
        int l=1,r=n;
        cout<<"? "<<l<<' '<<r<<'\n';
        cout<<flush;
        int gc;
        cin>>gc;
        int mid;
        int ans=0;
        while(l<=r)
        {
            mid= l +(r-l)/2;
            cout<<"? "<<1<<' '<<mid<<'\n';
            cout<<flush;
            int a;
            cin>>a;
            if (a<gc)
            {
                l=mid+1;
                
            }
            else
            {
                r=mid-1;
                ans=mid;
            }
        }
        cout<<"! "<<ans-gc+1<<' '<<ans<<'\n';
        cout<<flush;
    }
    return 0;
}
