#include <iostream>
#include <vector>
#include <algorithm>
#define int long long 
using namespace std;
signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mid= (n+1)/2 -1;
    int hi=2e9;
    int lo=v[mid];
    int mm=0;
    while (lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        int index=n-1;
        int y=0;
        while( index >=(n+1)/2 -1)
        {
            if (mid>v[index]){
            y+=mid-v[index];
            }
            index--;
        }
        if (y>k)
        {
            hi=mid-1;
        }
        else
        {
            if (mid>mm)
            {
                mm=mid;
            }
            lo=mid+1;
        }
    }
    cout<<mm;
    return 0;

    

}