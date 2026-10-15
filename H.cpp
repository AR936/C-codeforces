#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int c=0;
    while (n>0)
    {
        int k = n%10;
        if (k == 4 || k==7)
        {
            c+=1;
        }
        n/=10;
    }
    if (c==4 || c==7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}