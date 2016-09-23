#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <numeric>

#include <iterator>
using std::ostream_iterator; 

int main()
{
    vector<int> coll = {17, -3, 22, 13, 13, -9}; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    adjacent_difference(coll.begin(), coll.end(), 
                        coll.begin()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    partial_sum(coll.begin(), coll.end(), 
                coll.begin()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
