#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;
void check(vector<int>& v,int i1,int i2);

int counter=0;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    check(v,0,n-1);
    cout<<counter;
    return 0;    
}
void check (vector<int>& v,int i1,int i2)
{
    vector<int>ps(i2-i1+2);
    ps[0]=0;
    for(int i=i1+1;i<i2;i++)
    {
        ps[i-i1]=ps[i-i1-1]+v[i-1];
    }
    map<int,pair<int,pair<int,int>>>mp;
    for (int i=1;i<i2-i1+2;i++)
    {
        mp[ps[i]].first++;
        if (mp[ps[i]].first==1)
        {
            mp[ps[i]].second.first=i;
        }
        else
        {
            mp[ps[i]].second.second=i;
        }
    }
    int s=1;
    for (const auto& [m,d]:mp)
    {
        if (d.first>1)
        {
            s=0;
            check(v,d.second.first,d.second.second);
            
        }
        if (s)
        {
            counter++;
        }
    }
}