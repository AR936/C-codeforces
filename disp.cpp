#include <iostream>
#include <vector>
#include <set>
#include <map>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        set<int>lf;
        string p;
        cin>>p;
        vector<int>l;
        for (const auto& x:p)
        {
            mp[x]++;
            l.push_back(x);
            lf.insert(x);
        }        
        set<int>rf;
        vector<int>r;
        int m=0;
        int ls=l.size();
        while (ls>0)
        {
            int s=lf.size()+rf.size();
            if (s>m)
            {
                m=s;
            }
            auto it=l.rbegin();
            rf.insert(*it);
            if (mp[*it]==1){
            lf.erase(*it);}
            mp[*it]--;
            l.pop_back();            
            ls--;
        }
        cout<<m<<'\n';
    }
    return 0;
}