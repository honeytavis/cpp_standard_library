#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector> 
using std::vector; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia+2, ia+7); 
    coll.insert(coll.end(), ia+4, ia+9); 
    coll.insert(coll.end(), ia, ia+3); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n';

    make_heap(coll.begin(), coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n';

    sort(coll.begin(), coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n';

    return 0; 
}
