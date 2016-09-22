#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque> 
using std::deque; 

#include <algorithm>
#include <functional>
using std::greater; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    deque<int> coll(ia+2, ia+7); 
    coll.insert(coll.end(), ia+1, ia+6); 
    coll.insert(coll.end(), ia, ia+5); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    nth_element(coll.begin(), coll.begin()+5, 
                coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    nth_element(coll.begin(), coll.begin()+5, 
                coll.end(), 
                greater<int>()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
