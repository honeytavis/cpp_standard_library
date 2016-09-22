#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <functional>
using std::greater; 
using std::placeholders::_1; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll1(ia, ia+6); 
    coll1.insert(coll1.end(), ia, ia+9); 
    move(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    remove_copy(coll1.begin(), coll1.end(), 
                ostream_iterator<int>(cout, " "), 
                3); 
    cout << '\n'; 

    remove_copy_if(coll1.begin(), coll1.end(), 
                   ostream_iterator<int>(cout, " "), 
                   bind(greater<int>(), _1, 3)); 
    cout << '\n'; 

    return 0; 
}
