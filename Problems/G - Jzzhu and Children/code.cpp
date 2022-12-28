#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    deque <int> qi;
    deque <int> qm;
    int count = 1;
    int index;
    while(n--)
    {
        int c;
        cin >> c;
        qm.push_back(c);
        qi.push_back(count);
        count++;
    }
    while(qi.size()!=1)
    {
        if (qm.front()>m)
        {
            qi.push_back(qi.front());
            qi.pop_front();
            qm.push_back(qm.front()-m);
            qm.pop_front();
        }
        else
        {
            qi.pop_front();
            qm.pop_front();
        }
    }
    cout << qi.front(); 
    
}