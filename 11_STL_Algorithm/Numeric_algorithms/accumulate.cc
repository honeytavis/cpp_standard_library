#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <list>
using std::list; 

#include <algorithm>
#include <numeric>
#include <functional>
using std::multiplies; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia, ia+9); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "sum1: "
         << accumulate(coll.begin(), coll.end(), 0)
         << '\n'; 

    cout << "sum2: "
         << accumulate(coll.begin(), coll.end(), 1, multiplies<int>())
         << '\n'; 

    cout << "sum3: "
         << accumulate(coll.begin(), coll.end(), 0, multiplies<int>())
         << '\n'; 

    return 0; 
}
