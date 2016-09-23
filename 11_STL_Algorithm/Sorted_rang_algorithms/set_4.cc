#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <deque>
using std::deque; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll1(ia, ia+6); 
    deque<int> coll2(ia+2, ia+9); 

    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "set_union(): " << '\n';
    set_union(coll1.begin(), coll1.end(), 
              coll2.begin(), coll2.end(), 
              ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "set_intersection(): " << '\n'; 
    set_intersection(coll1.begin(), coll1.end(), 
                     coll2.begin(), coll2.end(), 
                     ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 
    
    cout << "set_difference(): " << '\n'; 
    set_difference(coll1.begin(), coll1.end(), 
                   coll2.begin(), coll2.end(), 
                   ostream_iterator<int>(cout, " "));
    cout << '\n'; 

    cout << "set_symmetric_difference(): " << '\n'; 
    set_symmetric_difference(coll1.begin(), coll1.end(), 
                             coll2.begin(), coll2.end(), 
                             ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
