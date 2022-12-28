#include <iostream>
#include <deque>
using namespace std;
#define endl "\n"
int main()
{
    deque <int> q1;
    int n,d;
    cin >> n;
    cin >> d;
    while (n--)
    {
        int x;
        cin >> x;
        q1.push_back(x);
    }
    while(d--)
    {
        int tmp = q1.front();
        q1.push_back(tmp);
        q1.pop_front();
    }
    for ( auto x: q1)
    {
        cout << x <<" ";
    }
}