#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <functional>
using std::greater; 
using std::less; 
using std::placeholders::_1; 

#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia+1, ia+6); 
    coll.insert(coll.end(), ia+3, ia+9); 
    
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    replace_copy(coll.begin(), coll.end(), 
                 ostream_iterator<int>(cout, " "), 
                 5, 
                 55); 
    cout << '\n'; 

    replace_copy_if(coll.begin(), coll.end(), 
                    ostream_iterator<int>(cout, " "), 
                    bind(less<int>(), _1, 5), 
                    0); 
    cout << '\n'; 

    replace_copy_if(coll.begin(), coll.end(), 
                    ostream_iterator<int>(cout, " "), 
                    bind(greater<int>(), _1, 5), 
                    5); 
    cout << '\n'; 

    return 0; 
}
