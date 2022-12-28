#include <iostream>
#include <deque>
#include <stack>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack <int> s;
    int t;
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int n;
            cin >> n;
            s.push(n);
        }
        else if (q == 2)
        {
            if(s.empty())
            {
                continue;
            }
            s.pop();
        }
        else if (q == 3)
        {
            if(!s.empty()) cout << s.top() << "\n";
            else cout << "Empty!" << "\n";
            
        }
    }
}