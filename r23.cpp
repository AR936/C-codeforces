#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int sum=0;
    vector <int> r=v;
    vector <int> p(k);
    for (int i=0; i<k;i++)
    {
        int o=*max_element((r).begin(),(r).end());
        sum+=o;
        auto it = find(r.begin(), r.end(), o);
    if (it != r.end()) {
    r.erase(it); }
        p[i]=o;
    }
    cout << sum << '\n';
    int co=0;
    int sep=0;
    for (int i=0;i<n;i++)
    {
       if (sep<k-1)
       {
        co++;
        if (find(p.begin(), p.end(), v[i]) != p.end())
        {
            cout << co<<' ';
            co=0;
            sep++;
            p.erase(remove(p.begin(), p.end(), v[i]), p.end());
        }
       }
       else
       {
        cout << n-i ;
        break;
       }

    }
    return 0;
}