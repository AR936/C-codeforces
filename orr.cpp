#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(m+1);
    v[0]=1;
    for (int i=1;i<m+1;i++)
    {
        cin>>v[i];
    }
    int time=0;
    for (int i=0;i<m;i++)
    {
        if (v[i+1]>=v[i])
        {
            time+=v[i+1]-v[i];
        }
        else
        {
            time+=n-v[i]+v[i+1];
        }
    }
    cout << time ;
    return 0;
}