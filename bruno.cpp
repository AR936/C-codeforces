#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        int su=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            su+=v[i];
        }
        
        if (su==s)
        {
            std::cout<<0<<'\n';
        }
        else if (s<0)
        {
            std::cout<<-1<<'\n';
        }
        else if (su==0)
        {
            std::cout<<-1<<'\n';
        }
        else if (s>su)
        
        {
            std::cout<<-1<<'\n';
        }
        else 
        {
            int count=0;
            int left=0,right=n-1;
            
            while(s!=su)
            {
                int l1=0,r1=0;
                for (int i=left;i<=right;i++)
                {
                    l1++;
                    if (v[i]==1)
                    {
                        break;
                    }
                }
                for (int i=right;i>=left;i--)
                {
                    r1++;
                    if (v[i]==1)
                    {
                        break;
                    }
                }
                su--;
                int a=min({l1,r1});
                count+=a;
                if (a==l1)
                {
                    left+=l1;
                }
                else
                {
                    right-=r1;
                }
            }
            std::cout<<count<<'\n';


        }
    }
    return 0;
}