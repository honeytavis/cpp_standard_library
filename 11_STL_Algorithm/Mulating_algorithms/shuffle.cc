#include <cstddef> // ptrdiff_t
#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <functional>
using std::greater; 

#include <iterator>
using std::ostream_iterator; 

#include <random>
using std::default_random_engine; 

class MyRandom {
public: 
    ptrdiff_t operator() (ptrdiff_t max) {
        double tmp; 
        tmp = static_cast<double>(rand()) / static_cast<ptrdiff_t>(tmp * max); 
        return static_cast<ptrdiff_t>(tmp * max); 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia, ia+9); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    random_shuffle(coll.begin(), coll.end()); 
    cout << "random_shuffle(): " << '\n'; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    sort(coll.begin(), coll.end()); 
    cout << "sort(): " << '\n'; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    default_random_engine dre; 
    shuffle(coll.begin(), coll.end(), dre); // -std=c++11
    cout << "shuffle(): " << '\n'; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    sort(coll.begin(), coll.end(), greater<int>()); 
    cout << "sort(): " << '\n'; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    MyRandom rd; 
    random_shuffle(coll.begin(), coll.end(), rd); // -std=c++11
    // random_shuffle(coll.begin(), coll.end(), MyRandom()); // -std=c++11
    cout << "random_shuffle(op): " << '\n'; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
