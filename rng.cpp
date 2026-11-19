#include <iostream>
#include<vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for (auto& x:a)
    {
        cin>>x;
    }
    for (auto& x:b)
    {
        cin>>x;
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int s=a[0]+b[0];
    for (int i=1;i<n;i++)
    {
        if (a[i]+b[i]!=s)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}