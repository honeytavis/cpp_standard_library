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
    int ia[] = {3, 2, 1}; 
    vector<int> coll(ia, ia+3); 
    
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "prev_permutation(): " << '\n'; 
    while (prev_permutation(coll.begin(), coll.end())) {
        copy(coll.begin(), coll.end(), 
             ostream_iterator<int>(cout, " ")); 
        cout << '\n'; 
    }

    return 0; 
}
