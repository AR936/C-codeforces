#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c=0;
    for (int i=0;i<n;i++)
    {
        int p,t,q;
        
        cin >> p>>t>>q;
        if (p+t+q > 1)
        {
            c++;
        }
        
    }
    cout << c;
    return 0;
}