#include <iostream>
#include <vector>
#include <list>
using namespace std;


int main()
{
    list <int> l ={5,6,7,8,9,10};
    list <int> l2 = {1,2,3,4};
    l.remove(10); //removes all occurences of 10 in the list
    auto it = l.begin();
    it++;
    l.erase(it, l.end()); //deletes all items in the range of it and l.end()
    l.insert(it,2); // adds a 2 in the position of the iterator
    l.insert(it,2,50); // adds 2 50's in the position of the iterator
    for ( auto i:l)
        cout << i << " " << "\n";
    cout << "size: " << l.size()<< "\n";
    l.assign(10,2);
     for ( auto i:l)
        cout << i << " " << "\n";
    l.clear(); //clears all element in the list
    l.merge(l2); //merges two lists and sorts the elements, also it clears the parameter list
    l.unique(); //deletes all duplicate elements (wow)
    bool flag= 1;
    l.remove_if(flag); // 
     for ( auto i:l2)
        cout << i << " " << "\n";
    l.splice(l.begin(), l2); // copies the entire content of l2 into l.begin() and clears the second list
    

    //properties: does not have random access operator (subscript) ot (.at()) only accessible by an iterator
    // cons : uses a lot of memory

}