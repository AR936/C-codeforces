#include <iostream>
#include <vector>
using namespace std;
#define int long long  
signed main()
{
    int n;
    cin>>n;
    int s=0;
    vector<int>v(n);
    for (int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s+=k;
        v[i]=s;
    }
    int m;
    cin>>m;
    while (m--)
    {
        int j;
        cin>>j;
        cout<<lower_bound(v.begin(),v.end(),j)-v.begin()+1<<'\n';
    }
    return 0;
}