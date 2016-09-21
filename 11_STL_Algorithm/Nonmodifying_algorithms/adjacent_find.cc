#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

class f {
public: 
    bool operator() (int val1, int val2) {
        return (val1 * 2) == val2; 
    }
}; 

int main()
{
    int ia[] = {1, 3, 2, 4, 5, 5, 0};
    vector<int> coll(ia, ia+(sizeof(ia)/sizeof(ia[0]))); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    vector<int>::iterator pos = adjacent_find(coll.begin(), coll.end()); 
    if (pos != coll.end()) {
        cout << *pos 
             << " is the " 
             <<  distance(coll.begin(), pos) << "th" 
             << " element\n"; 
    }

    pos = adjacent_find(coll.begin(), coll.end(), f()); 
    if (pos != coll.end()) {
        cout << "1th two elements in the pos. " 
             << distance(coll.begin(), pos)
             << '\n'; 

    }

    return 0; 
}
