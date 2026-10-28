#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >>n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    vector <int> s = v;
    sort((v).rbegin(),(v).rend());
    vector <int>h(v.begin(),v.begin()+k);
    int sum=0;
    for (int i=0;i<k;i++)
    {
        sum+=h[i];
    }
    vector <int> y;
    for (int i=0;i<n;i++)
    {
        if ((find(h.begin(),h.end(),s[i])!=h.end()))
        {
            y.push_back(i);
            h.erase(find(h.begin(),h.end(),s[i]));
        }
    }
    cout<<sum<<'\n'; 
    if (k>1)
    {
    cout<<y[1]<<' ';
    }
    for(int i=2;i<k;i++)
    {
        cout << y[i]-y[i-1]<<' ';
    }
    cout << n-y[k-1];
    return 0;
}