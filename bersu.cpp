#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector <int> b(n);
    
    
    for (int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cin>>m;
    vector<int> g(m);
    for (int i=0;i<m;i++)
    {
        cin>>g[i];
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    vector<int>h;
    vector<int>l;
    int len,len2;
    if (n>=m)
    {
        h=b;
        l=g;
        len=m;
        len2=n;

    }
    else
    {
        h=g;
        l=b;
        len=n;
        len2=m;
    }
    int li=0,hi=0;
    int pairs=0;
    for(int li=0;li<len;li++)
    {
        for (int i=hi;i<len2;i++){
            if (abs(l[li]-h[i])<=1)
            {
                pairs++;
                hi=i+1;
                break;
            }}
    }
    cout << pairs;

}