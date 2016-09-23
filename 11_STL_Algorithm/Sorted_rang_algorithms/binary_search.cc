#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia, ia+9); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    if (binary_search(coll.begin(), coll.end(), 5)) {
        cout << "5 is in present" << '\n'; 
    } else {
        cout << "5 is not in present" << '\n'; 
    }

    if (binary_search(coll.begin(), coll.end(), 42)) {
        cout << "42 is in present" << '\n'; 
    } else {
        cout << "42 is not in present" << '\n'; 
    }

    return 0; 
}
