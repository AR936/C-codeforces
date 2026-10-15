#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int c = k*w*(w+1)/2;
    if (c>n)
    {
        cout << (c-n);
    }
    else
    {
        cout << 0;
    }
    return 0;
}