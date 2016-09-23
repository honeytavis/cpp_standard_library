#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <numeric>
#include <functional>
using std::multiplies; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia, ia+6); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    partial_sum(coll.begin(), coll.end(), 
                ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    partial_sum(coll.begin(), coll.end(), 
                ostream_iterator<int>(cout, " "), 
                multiplies<int>()); 
    cout << '\n'; 

    return 0; 
}
