#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >>x;
    if (x%5 !=0)
    {
        cout << (int)((x-(x%5))/5 +1 );
    }
    else
    {
        cout << (int)(x/5);
    }
    return 0;
}