#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main()
{
    vector<string>v(5);
    for (int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    int cont=0;
    for (int i=0;i<5;i++)
    {
        int c=0;
        for (int j=0;j<5;j++)
        {
            if (v[i][j]=='o')
            {
                c++;
            }
        }
        if (c>cont)
        {
            cont=c;
        }
    }
    for (int i=0;i<5;i++)
    {
        int c=0;
        for (int j=0;j<5;j++)
        {
            if (v[j][i]=='o')
            {
                c++;
            }
        }
        if (c>cont)
        {
            cont=c;
        }
    }
    int i=0,j=0;
    {
        int c=0;
        while (i<5)
        {
            if (v[i][j]=='o')
            {
                c++;
            }
            i++;
            j++;
        }
        if (c>cont)
        {
            cont=c;
        }
    }
    i=0,j=5;
    {
        int c=0;
        while (i<5)
        {
            if (v[i][j]=='o')
            {
                c++;
            }
            i++;
            j--;
        }
        if (c>cont)
        {
            cont=c;
        }
    }
    cout << 5-cont;
}