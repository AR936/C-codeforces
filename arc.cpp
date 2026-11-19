#include <iostream>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int x=0,y=0;
    while (n--)
    {
        char c;
        cin>>c;
        if (c=='U')
        {
            y++;
        }
        else if (c=='D')
        {
            y--;
        }
        else if (c=='L')
        {
            x--;
        }
        else if (c=='R')
        {
            x++;
        }
    }
    cout<<x<<' '<<y;
}