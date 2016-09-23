#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 
#include <set>
using std::set; 

#include <algorithm>
#include <functional>
using std::greater; 
using std::placeholders::_1; 
using std::placeholders::_2; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll1(ia, ia+6); 
    set<int> coll2(ia+2, ia+8); 

    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "merge1: " << endl; 
    merge(coll1.begin(), coll1.end(), 
          coll2.begin(), coll2.end(), 
          ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "merge2: " << endl; 
    coll1.sort(greater<int>()); 
    set<int, greater<int>> coll3(ia+2, ia+8); 

    merge(coll1.begin(), coll1.end(), 
          coll3.begin(), coll3.end(), 
          ostream_iterator<int>(cout, " "), 
          bind(greater<int>(), _1, _2)); 
    cout << '\n'; 

    return 0; 
}
