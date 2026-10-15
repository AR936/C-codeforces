#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    int ar[n];
    for (int i=0; i<n;i++)
    {
        cin >> ar[i];
    }
    int a= ar[k-1];
    int c=0;
    for (int i=0; i<n;i++)
    {
        if((ar[i]>= a)&&(ar[i]>0))
        c++;
        else
        {
            break;
        }
    }
    cout << c;
}