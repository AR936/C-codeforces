#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>> n>>k;
        string p;
        cin>>p;
        int c=0;
        int i=0;
        while (i<n)
        {
            if (p[i]=='B')
            {
                c++;
                i+=k;
            }
            else{
                i++;
            }
        }
        cout << c << '\n';
    }
}