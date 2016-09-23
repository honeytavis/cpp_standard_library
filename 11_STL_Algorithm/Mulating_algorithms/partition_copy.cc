#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

class even {
public: 
    bool operator() (int elem) {
        return elem % 2 == 0; 
    }
}; 

int main()
{
    vector<int> coll{1, 6, 33, 7, 22, 4, 11, 33, 2, 7, 0, 42, 5}; 
    cout << "coll: " << '\n'; 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " "));
    cout << '\n'; 

    vector<int> coll_even; 
    vector<int> coll_odd; 

    partition_copy(coll.begin(), coll.end(),  
                   back_inserter(coll_even), 
                   back_inserter(coll_odd), 
                   even()); // -std=c++11

    cout << "coll_even: " << '\n'; 
    move(coll_even.begin(), coll_even.end(), 
         ostream_iterator<int>(cout, " "));
    cout << '\n'; 

    cout << "coll_odd: " << '\n'; 
    move(coll_odd.begin(), coll_odd.end(), 
         ostream_iterator<int>(cout, " "));
    cout << '\n'; 

    return 0; 
}
