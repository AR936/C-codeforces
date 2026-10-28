#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>o;
        vector<int>e;
        int k;
        int el=0,ol=0;
        for(int i=1;i<n+1;i++)
        {
            cin>>k;
            if (i%2==0)
            {
                o.push_back(0);
                e.push_back(k);                
            }
            else
            {
                o.push_back(k);
                e.push_back(0);
            }
        }
        vector<int>ops(n+1);
        vector<int>eps(n+1);
        map<int,int>mp;
        mp[0]=1;
        ops[0]=0;
        eps[0]=0;
        for (int i=1;i<n+1;i++)
        {
            ops[i]=o[i-1]+ops[i-1];
            eps[i]=e[i-1]+eps[i-1];
            mp[ops[i]-eps[i]]++;
        }
        int su=0;
        for (const auto& [m,d]:mp)
        {
            if (d>1)
            {
                su+=d*(d-1)/2;
            }
        }
        if (su)
        {
            cout << "YES"<< '\n';
        }
        else
        {
            cout << "NO"<< '\n';
        }
    }
}