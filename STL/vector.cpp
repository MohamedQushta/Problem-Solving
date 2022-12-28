#include <bits/stdc++.h>
using namespace std;

bool greaterThanThree(int i);


int main ()
{
    vector <int> v={5,1,2,7,0,3}; // initializes a four element vector with the vlaue of zero
    // vector <int> v2(4,200); // initializes a four element vector with the vlaue of 200
    // int i = 0;
    // v.push_back(6); // puts an element at on past the last index of the vector
    // v.emplace_back(6); // puts an element at on past the last index of the vector (but faster)
    // v.swap(v2); // Swaps the element of the first vector with the elements of the second vector
    // v.front(); // returns the first element of the vector
    // v.back(); // returns the last element of the vector
    // v.at(i); // returns the ith element of the vector (the difference between this function and subscript is that it 
    //                                                     //gives and out of range error)
    // v.size(); // returns the max size of a vector
    // v.capacity(); // // returns the max capacity of a vector
    // cout << v.empty(); // a function that returns a boolean (true if vector is empty)
    // v.pop_back(); // a function that removes the last element of a vector
    // auto it1 = v.begin(); // returns an address to the first element in a vector
    // auto it2 = v.end(); // returns an address to the element past the last in a vector
    // auto it3 = v.rbegin(); // returns an address to the last element in a vector
    // auto it4 = v.rend(); // returns an address to the first element in a vector
    // v.insert(v.begin(), 55); // inserts the value 55 to the position v.begin()
    // v.emplace(v.begin(), 55); // inserts the value 55 to the position v.begin()
    // v.erase(v.begin()),v.end(); // erase the elements from the first parameter to the second parameter
    // v.resize(5); // changes the size of the vector to the value in the parameter
    // v.shrink_to_fit(); // shrinks the vecor size to be exactly equal the number of elements
    // sort(v.begin(), v.end());
    // reverse(v.begin(),v.end());
    // max_element(v.begin(), v.end()); // returns an iterator to the max element in the vector
    // minmax_element(v.begin(), v.end()); // returns a pair containing an iterator to the minimum element and an iterator to the max element
    
    // //Applications


// //1
//     auto it6 = min_element(v.begin(), v.end()); // returns an iterator to the min element in the vector
//     sort(v.begin(),it1); // sorts until the min nubmber
//     return 0;


//2
    sort(v.begin(),v.end());
    auto it5 = find_if(v.begin(), v.end(),greaterThanThree);// returns an it3erator to the min element in the vector
    for (;it5!=v.end();it5++)
        cout << *it5 << endl;
    return 0;


//3

int arr[3] = { 1,2,3};



}
bool greaterThanThree(int i)
{
    return i>3;
}