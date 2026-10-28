#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <string,int> m ;
    for(int i=0; i<n;i++)
    {
        string c;
        cin >> c;
        m[c]+=1;
        int k=m[c];
        if ( k>1)
        {
            cout << c+to_string(k-1)<<'\n';
        }
        else
        {
            cout << "OK"<<'\n';
        }

    }
    return 0;
}