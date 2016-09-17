#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 
using std::greater; 

#include <set>
using std::set; 

int main()
{
    //set<int> coll; 
    set<int, greater<int> > coll; 

    coll.insert(3); 
    coll.insert(1); 
    coll.insert(5); 
    coll.insert(4); 
    coll.insert(1); 
    coll.insert(6); 
    coll.insert(2); 

    set<int>::iterator pos; 
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << *pos << ' '; 
    }
    cout << endl; 

    return 0; 
}
