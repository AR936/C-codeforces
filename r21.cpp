#include <iostream>
#include <set>
using namespace std;
int main()
{
    string p;
    getline(cin,p);
    int d=0;
    set <char> v(p.begin(),p.end());
    int n=v.size();
    if (n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else 
    {
        cout<<"IGNORE HIM!";
    }
    return 0;

}