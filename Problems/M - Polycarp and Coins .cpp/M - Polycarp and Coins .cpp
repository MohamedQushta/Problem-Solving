#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <stack>
using namespace std;

int main()
{
int t; cin >> t;

while (t--)
{
    int n; cin >> n;
    int x , y;
    y = (n-1)/3;
    x = y + 1;
    cout << x << ' ' << y << '\n';
}
}
