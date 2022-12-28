#include <iostream>
#include <deque>
#include <stack>
#include <queue>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue <int> q;
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        if (k == 1)
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (k == 2)
        {
            if(q.empty())
            {
                continue;
            }
            q.pop();
        }
        else if (k == 3)
        {
            if(!q.empty()) cout << q.front() << "\n";
            else cout << "Empty!" << "\n";
            
        }
    }
}