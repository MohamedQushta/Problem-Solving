#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{   
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n; cin >> n;
int st; int sto;
int max=0;
vector <int> v;
vector <int> v1;
int count = 0;
while (n--){
int x; cin >> x;
v.push_back(x);
}
for (int i = 1; i < v.size(); ++i)
{
    if ( v[i]== 1)
    {
        v1.push_back(v[i-1]);
        count++;
    }
}
v1.push_back(v[v.size()-1]);
++count;
cout << count << "\n";
for ( auto i : v1 )
    cout << i << ' ';

}