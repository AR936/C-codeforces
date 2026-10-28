#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t;i++)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        int s=0;
        for (int j=0;j<n;j++)
        {
            cin >> v[j];
        }
        for (int j=0;j<n;j++)
        {
            for (int k=1;j+k<n;k++)
            {
                if((v[j+k]-v[j])==k)
                {
                    s++;
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}