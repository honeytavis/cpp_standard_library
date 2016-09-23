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
    int ia[] = {2, 4, 6, 8, 1, 3, 5, 7, 9}; 
    list<int> coll(ia, ia+9); 
    coll.sort(); 

    list<int>::iterator pos1, pos2; 
    pos1 = lower_bound(coll.begin(), coll.end(), 5); 
    pos2 = upper_bound(coll.begin(), coll.end(), 5); 

    coll.insert(pos1, 4); 
    coll.insert(pos2, 5); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
