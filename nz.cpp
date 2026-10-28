#include <iostream>
#include<vector>
#include <set>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ps(n+1);
    ps[0]=0;
    for (int i=1;i<n+1;i++)
    {
        ps[i]=ps[i-1]+v[i-1];
    }
    int counter=0;
    set <int> s;
    for(int i=0;i<n+1;i++)
    {
        auto k=s.insert(ps[i]);
        if (k.second==false)
        {
            counter++;
            s.clear();
            s.insert(ps[i-1]);
            s.insert(ps[i]);
        }
    }
    cout << counter ;
    return 0;
}