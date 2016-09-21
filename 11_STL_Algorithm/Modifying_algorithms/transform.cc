#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <list>
using std::list; 

#include <algorithm>
#include <functional>
using std::plus; 
using std::negate; 
using std::multiplies; 
using std::placeholders::_1;  // -std=c++11

#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

class f {
public: 
    int operator() (int& elem) {
        return -elem; 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll1(ia, ia+9); 
    list<int> coll2; 

    transform(coll1.begin(), coll1.end(), 
              coll1.begin(), negate<int>()); 
    move(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    // vector<int>::iterator pos; 
    // for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
    //     cout <<  *pos << ' '; 
    // }
    // cout << '\n'; 

    back_insert_iterator<list<int>> iter(coll2); 
    transform(coll1.begin(), coll1.end(), 
              back_inserter(coll2), bind(multiplies<int>(), _1, 10)); 

    transform(coll2.begin(), coll2.end(), 
              ostream_iterator<int>(cout, " "), f()); 
    cout << '\n'; 

    transform(coll1.begin(), coll1.end(), 
              coll2.begin(), 
              back_inserter(coll2), 
              plus<int>()); 

    move(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 
  
    transform(coll1.begin(), coll1.end(), 
              coll2.begin(), 
              ostream_iterator<int>(cout, " "),
              plus<int>()); 
    cout << '\n'; 

    return 0; 
}
