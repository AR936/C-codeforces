#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i=0; i<n;i++)
    {
        string w;
        getline(cin,w);
        int k=w.length();
        if (k<=10)
        {
            cout << w << '\n';
        }
        else
        {
            cout<<w[0]<<k-2<<w[k-1]<<'\n';
        }
    }
    return 0;
}