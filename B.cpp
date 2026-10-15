#include <iostream>
using namespace std;
int main()
{
    int l,r;
    cin >> l >> r;
    int yr=0;
    while (l<=r)
    {
        l*=3;
        r*=2;
        yr++;
    }
    cout << yr;
}