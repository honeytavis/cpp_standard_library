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
    vector<int> coll(ia, ia+9); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    rotate(coll.begin(), coll.begin()+1, coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    rotate(coll.begin(), coll.end()-2, coll.end()); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    rotate_copy(coll.begin(), 
                find(coll.begin(), coll.end(), 4), 
                coll.end(), 
                ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
