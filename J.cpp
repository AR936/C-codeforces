#include <iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int c=0,p=0;
    int k;
    for (int i=0;i<n;i++)
    {
        cin>>k;
        if (k>0)
        {
            p+=k;
        }
        else
        {
            if (p>0)
            {
                p--;
            }
            else
            {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}