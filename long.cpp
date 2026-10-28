#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int c;
    cin >> c;
    for (int i=0;i<c;i++)
    {
        int n,k;
        cin >> n>>k;
        int inp;;
        map<int,int>m;
        set<int>s;
        for (int i=0;i<n;i++)
        {
            cin>>inp;
            m[inp]++;
            s.insert(inp);
        }    
        int cst=0,st=0;
        int r,r1;
        r=*s.begin();
        for (int val : s)
        {
            if (cst==0)
            {
                r1=val;
            }
            if (m[val]>=k)
            {
                cst+=1;
            }
            else
            {
                if (cst>st)
                {
                    st=cst;
                    r=r1;
                }
                cst=0;
                
            }
        }
        if (cst==0)
        {
            cout << -1<<'\n' ;
        }
        else if(cst>st)
        {
            st=cst;
            r=r1;
            auto it=s.find(r);
            advance(it,st-1);
            int l=*it;
            cout << r <<' '<< l<<'\n';
        }
        
    }
    return 0;
}