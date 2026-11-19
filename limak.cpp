#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int yc=0;
    vector<int>v;
    for (int i=0;i<15;i++)
    {
        if (yc <2){
        cout<<arr[i]<<'\n';
        cout<<flush;
        string p;
        cin>>p;
        if (p=="yes")
        {
            
            yc++;
            v.push_back(arr[i]);
        }
        }
        else
        {
            cout<<"composite";
            return 0;
        }

    }
    if (yc==0){
    cout<<"prime";}
    else 
    {
        for ( auto& x:v)
        {
            int u=x;
            int c=0;
            for (int i=0;i<5;i++){
            x*=u;
            cout<<x<<'\n';
            cout<<flush;
            string p;
            cin>>p;
            if (p=="yes")
            {
                c++;
            }}
            if (c>0)
            {
                cout<<"composite";
                return 0;
            }
            else{
                cout<<"prime";
                return 0;
            }
        }
        
    }
    return 0;


}