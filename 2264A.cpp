#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        int ar[l];
        for (int i=0;i<l;i++)
        {
            
            cin>> ar[i];
            
        }
        int d=1;
        int c=l+1;
        for (int i=0;i<l;i++)
        {
            int k=ar[i];
            if(!(k==i+1))
            {
                if (!(k<c))
                {
                    d=0;
                    break;
                }
                else
                {
                    c=k;
                }
            }

        }
        if (d)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}