#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

#define int long long
int check(int m,vector<int> v,int n);
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin >>n>>x;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if (n==1)
        {
            cout<<v[0]+x<<'\n';
            continue;
        }
        int left=v[0],right=2e9;
        int mid;
        int mh=0;
        int oh;
        while (left<=right)
        {
            mid=left+(right-left)/2;
            int height=check(mid,v,n);
            if (height>x)
            {
                right=mid-1;
            }
            else{
                if (height>=mh){
                mh=height;
                oh=mid;
                }
                left=mid+1;
                
            }
            
        }
        cout << oh<<'\n';
    }
    return 0;
}
int check(int m,vector<int> v,int n)
{
    int w=0;
    for (int j=0; j<n;j++)
    {
        if (m>v[j])
        {
            w+=m-v[j];
        }
    }
    return w;
}