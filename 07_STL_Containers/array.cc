#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <array>
using std::array; 

#include <algorithm>
#include <functional>
#include <numeric>
using std::accumulate; 
using std::negate; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    array<int, 10> a = {11, 22, 33, 44}; // -std=c++11
    move(a.begin(), a.end(),
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "sum: " << accumulate(a.begin(), a.end(), 0) << '\n'; 

    transform(a.begin(), a.end(), 
              ostream_iterator<int>(cout, " "), 
              negate<int>()); 
    cout << '\n'; 

    return 0; 
}
