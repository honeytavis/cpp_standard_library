#include <iostream>
using std::cin; 
using std::endl; 
using std::cout; 

#include <list>
using std::list; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

int main()
{
    int ia[] = {1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4}; 
    list<int> coll; 

    back_insert_iterator<list<int>> iter(coll); 
    copy(ia, ia+(sizeof(ia)/sizeof(ia[0])), 
         back_inserter(coll)); 

    coll.sort(); 
    unique_copy(coll.begin(), coll.end(), 
                ostream_iterator<int>(cout, " "));
    cout << '\n'; 

    return 0; 
}
