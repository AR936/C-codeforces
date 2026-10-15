#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int l;
        char c;
        string p;
        cin >> l >> c;
        cin.ignore();
        getline(cin,p);
        int count=0;
        for (int i=0;i<l/2;i++)
        {
            if (!(p[i]==p[l-1-i]))
            {
                if ((p[i]==c)||(p[l-1-i]==c))
                {
                    count+=1;
                }
                else
                {
                    count+=2;
                }
            }
        }
        cout << count << '\n';

    }
    return 0;
}