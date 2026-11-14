#include <iostream>
using namespace std;
#define int long long 
signed main()
{
    string p;
    int k =p.size();
    cin>>p;
    int c=count(p.begin(),p.end(),'o');
    if (c%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout << "odd";
    }
}