#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <string>
using namespace std;
#define endl "\n"
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
while (n--)
{
    string s;
    cin >> s;
    stack <int> st;
    for (auto c: s)
        {
            if (!st.empty())
            {
                if ((c == ')' && st.top() == '(')||(c == '}' && st.top() == '{')||(c == ']' && st.top() == '['))
                    st.pop();
                else 
                    st.push(c);
            }
            else
            {
                st.push(c);
            }   
        }
    if (st.empty())
        {
            cout << "YES\n";
        }
    else
        {
            cout << "NO\n";
        }



}
 

}