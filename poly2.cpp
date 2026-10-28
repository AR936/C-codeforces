#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    vector<int>c=v;
    sort(c.rbegin(),c.rend());
    map<int,int>h;
    int s=0;
    for (int i=0;i<k;i++)
    {
        s+=c[i];
        h[c[i]]++;
    }
    cout << s << '\n';
    int count=0;
    int pc=0;
    if (k>1)
    {
        for (int i=0;i<n;i++)
        {
            if ( h.find(v[i])!=h.end() && h[v[i]]>0)
            {
                count++;
                h[v[i]]--;
                pc++;
                if (pc !=k-1)
                {
                    cout << count << ' ';
                    count=0;
                    
                }
                else{
                    cout <<count << ' '<< n-i-1;
                    break;
                }
            }
            else{
                count++;
            }
        }    
    }
    else
    {
        cout << n;
    }
    return 0;
}