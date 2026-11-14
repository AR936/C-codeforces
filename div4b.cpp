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
        int n;
        cin>>n;
        vector<char>v(n+1);
        v[0]='B';
        int c=0;
        for (int i=1;i<n+1;i++)
        {
            cin>>v[i];
            if (v[i]==v[i-1])
            {
                c++;
            }
        }
        cout<<c<<'\n';
    }
    return 0;
}