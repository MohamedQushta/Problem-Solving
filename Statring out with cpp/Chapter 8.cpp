#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int SIZE,int value);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    if(binarySearch(a,10,6)==-1)
    {
        cout << "The value was not found";
    }
    else
    {
        cout << "the value is found at position " << binarySearch(a,10,6);
    }
}
int binarySearch(int a[], int SIZE,int value)
{
    int first = 0;
    int last = SIZE -1;
    int mid;
    int position = -1;
    bool found = false;
    while(!found && first<=last)
    {
        mid = (first + last) / 2;
        if(a[mid]==value)
            {
                found = true;
                position = mid;
            }
        else if(a[mid] > value)
            {
                last = mid - 1;
            }
        else
            {
                first = mid + 1;
            }
    }
    return position;
}