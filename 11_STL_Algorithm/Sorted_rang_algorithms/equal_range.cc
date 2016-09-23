#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <utility>
using std::pair; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia, ia+9); 
    coll.insert(coll.begin(), ia, ia+9); 
    coll.sort(); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    pair<list<int>::const_iterator, list<int>::const_iterator> range; 
    range = equal_range(coll.begin(), coll.end(), 5); 
    copy(range.first, range.second, 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
