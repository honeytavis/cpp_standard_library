#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <iterator>
using std::ostream_iterator; 

#include <deque>
using std::deque; 

#include <utility>
using std::pair; 

#include <algorithm>

int main()
{
    int ia[] = {2, 3, 4, 5, 6}; 
    deque<int> coll(ia, ia+5); 

    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "minmum: "
         << *min_element(coll.begin(), coll.end())
         << '\n'; 

    cout << "maximum: "
         <<  *max_element(coll.begin(), coll.end())
         << '\n'; 

    pair<deque<int>::iterator, deque<int>::iterator> mm = minmax_element(coll.begin(), coll.end()); // -std=c++11
    cout << "distance between min - max: "
         << distance(mm.first, mm.second) 
         << '\n'; 

    return 0; 
}
