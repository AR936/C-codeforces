#include <iostream>
#include <vector>
#include <set>
#define int long long 
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector <int>v(n);
    int oc=0,ec=0;
    set<int>e;
    set<int>o;
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        if (v[i]%2==0)
        {
            ec++;
            e.insert(v[i]);
        }
        else
        {
            oc++;
            o.insert(v[i]);
        }
    }

    if (ec!=0 && oc !=0)
    {
       int s=0;
       if (oc %2!=0)
       {
        s+=*o.begin();
       }
       if (ec%2!=0)
       {
        s+=*e.begin();
       }
       cout<<s;
    }
    else
    {
        if (ec==0)
        {
            if (oc%2==0)
            {
                cout<<0;
            }
            else
            {
                cout<<*o.begin();
            }
        }
        else if (oc==0)
        {
            if (ec%2==0)
            {
                cout<<0;
            }
            else
            {
                cout<<*e.begin();
            }
        }
    }
    return 0;
}