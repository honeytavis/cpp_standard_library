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
    int ia[] = {1, 2, 3}; 
    vector<int> coll(ia, ia+3); 
    
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 
    cout << "next_permutation(): " << '\n'; 
    while (next_permutation(coll.begin(), coll.end())) {
        copy(coll.begin(), coll.end(), 
             ostream_iterator<int>(cout, " ")); 
        cout << '\n'; 
    }

    cout << "prev_permutation(): " << '\n'; 
    while (prev_permutation(coll.begin(), coll.end())) {
        copy(coll.begin(), coll.end(), 
             ostream_iterator<int>(cout, " ")); 
        cout << '\n'; 
    }
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    while (prev_permutation(coll.begin(), coll.end())) {
        copy(coll.begin(), coll.end(), 
             ostream_iterator<int>(cout, " ")); 
        cout << '\n'; 
    }

    return 0; 
}
