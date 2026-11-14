#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int h,w,n,q;
    cin>>h>>w>>n>>q;
    vector<int>r(h);
    vector<int>c(w);
    while (n--)
    {
        int o,p;
        cin>>o>>p;
        r[o-1]++;
        c[p-1]++;        
    }
    vector<int>rps(h+1);
    vector<int>cps(w+1);
    rps[0]=0;
    cps[0]=0;
    for (int i=1;i<h+1;i++)
    {
        rps[i]=rps[i-1]+r[i-1];
    }
    for (int i=1;i<w+1;i++)
    {
        cps[i]=cps[i-1]+c[i-1];
    }
    while (q--)
    {
        int y,u,d;
        cin>>y>>u>>d;
        if (y==1)
        {
            cout<<rps[d]-rps[u-1]<<'\n';
        }
        else
        {
            cout<<cps[d]-cps[u-1]<<'\n';
        }
    }
}

