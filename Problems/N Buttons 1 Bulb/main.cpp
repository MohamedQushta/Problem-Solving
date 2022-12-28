#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,counter = 0;
    cin >> t;
    string s,r;
    int n;
    while(t--)
    {
        cin >> n;
        cin >> s >> r;
        for (int i=0;i<n;++i)
            {
                if (s[i]!=r[i])
                    ++counter;
            }
            
        if (counter%2==0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}