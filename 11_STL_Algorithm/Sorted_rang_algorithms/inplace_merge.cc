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
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia, ia+7); 
    coll.insert(coll.end(), ia, ia+8); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    list<int>::iterator pos; 
    pos = find(coll.begin(), coll.end(), 7); 
    ++pos; // !!!
    inplace_merge(coll.begin(), pos, coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 


    return 0; 
}
