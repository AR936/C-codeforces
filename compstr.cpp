#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int k;
        cin >> k;
        vector <char> s(k);
        for (int j=0;j<k;j++)
        {
            cin >> s[j];
        }
        int counter=1;
        int mcounter=1;
        for  (int j=0;j<k-1;j++)
        {
            if (s[j]==s[j+1])
            {
                counter++;
                if (counter>mcounter)
                {
                    mcounter=counter;
                }
            }
            else{
                counter=1;
            }
        }
        cout << mcounter+1 <<'\n';
    }
    return 0;
}