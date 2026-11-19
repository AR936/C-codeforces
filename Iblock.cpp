#include <iostream>
using namespace std;
#define int long long
void p(int n);
signed main()
{
        int n;
        cin>>n;
        if (n%2==0)
        {
            if (n/2 % 2==0)
            {
                int c=0;
                for (int i=1;i<=n;i+=2)
                {
                    if (c==0)
                    {
                        cout<<i<<' '<<i+1<<' ';
                        c++;
                    }
                    else{
                        cout<<i+1<<' '<<i<<' ';
                        c--;
                    }
                }
            }
            else{
                cout<<-1;
            }
        }
        else
        {
            if ((n+1)/2 % 2==0)
            {
                int c=0;
                cout<<1<<' ';
                for (int i=2;i<=n;i+=2)
                {
                    if (c==0)
                    {
                        cout<<i+1<<' '<<i<<' ';
                        c++;
                    }
                    else{
                        cout<<i<<' '<<i+1<<' ';
                        c--;
                    }
                }
            }
            else{
                cout<<-1;
            }
        }
    
    return 0;
}