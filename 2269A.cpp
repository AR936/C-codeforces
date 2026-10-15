#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t;
    long long n,k;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin >> n >> k;
        long long ans = (1LL << (n - k + 1)) + 2 * (k - 1);
        cout << ans <<'\n';
    }
    return 0;
}