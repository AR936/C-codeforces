#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int h,w,n,q;
    cin>>h>>w>>n>>q;
    map<int,int>r;
    map<int,int>c;
    while (n--)
    {
        int o,p;
        cin>>o>>p;
        r[o-1]++;
        c[p-1]++;        
    }
    while (q--)
    {
        int y,u,d;
        cin>>y>>u>>d;
        int s=0;
        if (y==1)
        {
            for (const auto&[k,v]:r)
            {
                if (k>=u && k<=d)
                {
                    s+=v;
                }
            }
        }

        else
        {
             for (const auto&[k,v]:c)
             {
                if (k>=u && k<=d)
                {
                    s+=v;
                }
            }
               }
        cout << s<<'\n';
    }
    
    }


