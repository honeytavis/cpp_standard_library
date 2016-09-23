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

    reverse(coll.begin(), coll.end()); 
    cout << "reverse(): " << '\n';
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "reverse_copy(): " << '\n';
    reverse_copy(coll.begin(), coll.end(), 
                 ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
