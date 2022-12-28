#include <iostream>
using namespace std;

int main()
{
    int n,h,a,w=0;
    cin >> n >> h;
    while(n--)
    {
        cin >> a;
        if (a>h) w+=2;
        else w+=1;
    }
    cout << w;
}