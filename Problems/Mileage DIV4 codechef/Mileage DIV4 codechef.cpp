#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        float pp = (x*n)/a;
        float pd = (y*n)/b;
        if (pp>pd)
        {
            cout << "DIESEL"<<"\n";
        }
        else if (pp<pd)
        {
            cout << "PETROL" << "\n";
        } 
        else 
        {
            cout << "ANY"<< "\n";
        }
    }
}