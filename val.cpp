#include <iostream>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;
#define int long long
signed main()
{
    int n,l;
    cin>>n>>l;
    int k;
    set<int>s;
    for (int i=0;i<n;i++)
    {
        cin>>k;
        s.insert(k);
    }
    int ps=0;
    int md=0;
    for (const auto& d:s)
    {
        int dif=d-ps;
        if (dif>md)
        {
            md=dif;
        }
        ps=d;
    }
    double h= (double) md/2;
    double it = max({(double)*s.begin(),(double)l-*s.rbegin(),h});
    cout<<fixed<<setprecision(10)<<it<<"\n";
    return 0;
}