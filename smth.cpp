#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
signed main()
{
    int n,q;
    cin >> n>>q;
    vector <int> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector <ll> s(n+1);
    s[0]=0;
    for (int i=1;i<n+1;i++)
    {
        s[i]=s[i-1]+a[i-1];
    }

    for(int i=0;i<q;i++)
    {
        int l,r;
        cin >> l >>r;
        cout << s[r]-s[l-1]<<'\n';
    }
    return 0;
}