#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    int c1,c2;
    c1 = c2 = 0;
    int i = 0;
    while(n--)
    {
        s[i] == 'A' ? ++c1 : ++c2;
        ++i;
    }
    if (c1>c2)
        cout << "Anton";
    else if (c1<c2)
        cout << "Danik";
    else 
        cout << "Friendship";


}