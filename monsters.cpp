#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector <int> v(n);
        vector <int> m(n);
        map<int,vector<int>,greater<int>>ma;
        for (int i=0;i<n;i++)
        {
            cin >> v[i];
            m[i]=v[i]%k;
            ma[m[i]].push_back(i+1);
        }
        for (int i=0;i<n;i++)
        {
            if (m[i]==0)
            {
                cout << i+1 << ' ';
            }
        }
        for (const auto& [m1,m2]:ma)
        {
            if (m1 !=0)
            {
                int len=m2.size();
                for (int w=0;w<len;w++)
                {
                    cout <<  m2[w]<<' ';
                }
            }
        }
    cout << '\n';
    }
    return 0;
}