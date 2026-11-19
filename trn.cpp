#include<iostream>
#include <vector>
#include <algorithm>
#define int long long 
using namespace std;
signed main()
{
    int n;
    cin>>n;
    
    vector<int>v(n);
    for (auto& x:v)
    {
        cin>>x;
    }
    if (n<3)
    {
        cout<<"NO";
        return 0;
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<n-2;i++)
    {
        if (v[i]<(v[i+1]+v[i+2]))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}