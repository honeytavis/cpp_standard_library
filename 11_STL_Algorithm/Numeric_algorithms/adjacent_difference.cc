#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque>
using std::deque; 

#include <algorithm>
#include <numeric>
#include <functional>
using std::multiplies; 

#include <iterator>
using std::ostream_iterator;

int main()
{
    int ia[] = {3, 7, 8, 4, 9, 6, 1, 2}; 
    deque<int> coll(ia, ia+8); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    adjacent_difference(coll.begin(), coll.end(), 
                        ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    adjacent_difference(coll.begin(), coll.end(), 
                        ostream_iterator<int>(cout, " "), 
                        multiplies<int>()); 
    cout << '\n'; 

    return 0; 
}
