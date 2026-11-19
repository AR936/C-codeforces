#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int>r(n);
    for (auto& x:r)
    {
        cin>>x;
    }
    int c=0;
    sort(r.rbegin(),r.rend());
    for (int i=0;i<n-1;i++)
    {
        if (r[i]-r[i+1]<=k)
        {
            c++;
            i++;
        }
        
    }
    cout<<c;
    return 0;
}