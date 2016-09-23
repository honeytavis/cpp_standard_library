#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <set>
using std::set; 
using std::multiset; 

#include <algorithm>
#include <functional>
using std::greater; 

#include <iterator>
using std::ostream_iterator; 

#include <utility>
using std::pair; 

int main()
{
    set<int, greater<int> > coll1; // -std=c++11

    coll1.insert(4); 
    coll1.insert(3); 
    coll1.insert(5); 
    coll1.insert(1); 
    coll1.insert(6); 
    coll1.insert(2); 

    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    pair<set<int>::iterator, bool> ret; 
    ret = coll1.insert(4); 
    if (ret.second) {
        cout << "4 inserted as element" << '\n'; 
    } else {
        cout << "4 already exits" << '\n'; 
    }

    set<int> coll2(coll1.begin(), coll1.end()); 

    coll2.erase(3); 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    coll2.erase(coll2.begin(), coll2.end()); 
    cout << "erase(): "; 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
