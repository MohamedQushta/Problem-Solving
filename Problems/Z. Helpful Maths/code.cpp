#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (auto c : s)
    {
        if (c == '1' || c== '2' || c == '3')
            v.push_back((c));
    }
    sort (v.begin(),v.end());
    for (int i = 0; i<v.size(); ++i)
    {
        if (i == v.size()-1)
            cout << (char)v[i];
        else
            cout <<(char) v[i] << '+'; 
    }
}