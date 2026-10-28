#include <iostream>
#include <vector>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>b(n);
        b[n-1]=0;
        int min=v[n-1];
        for (int i=n-2;i>=0;i--)
        {
            if (v[i]<=min)
            {
                min=v[i];
                b[i]=0;
            }
            else
            {
                b[i]=1;
            }
        }
        int sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=b[i];
        }
        cout << sum << '\n';
    }
    return 0;
}