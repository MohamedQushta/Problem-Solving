#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (auto c: s) {
        if (!st.empty()) {
            if (st.top() == c)
                st.pop();
            else
                st.push(c);
        } else {
            st.push(c);
        }
    }
    if (st.empty())
        cout << "Yes";
    else
        cout << "No";


}
