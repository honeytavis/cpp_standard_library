#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include<deque>
using std::deque; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int ib[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23}; 
    vector<int> coll1(ia, ia+9); 
    deque<int> coll2(ib, ib+(sizeof(ib)/sizeof(ib[0]))); 

    cout << "before swap_ranges()\n"; 
    move(coll1.begin(), coll1.end(),
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    move(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    deque<int>::iterator pos; 
    pos = swap_ranges(coll1.begin(), coll1.end(), 
                      coll2.begin()); 

    cout << "after swap_ranges()\n"; 
    move(coll1.begin(), coll1.end(),
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    move(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
