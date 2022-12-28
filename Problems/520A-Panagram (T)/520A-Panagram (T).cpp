#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n;
    cin >> n;
    string s;
    cin >> s;
    for_each( s.begin(),s.end(),[](auto &c)
        {
            c=tolower(c);
        });
    set <char> st(begin(s), end(s));
    if (st.size() == 26) cout<< "YES";
    else cout << "NO";

}