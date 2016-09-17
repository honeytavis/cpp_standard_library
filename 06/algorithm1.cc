#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>

int main()
{
    vector<int> coll = {2, 5, 4, 1, 6, 3}; // -std=c++11

    vector<int>::iterator minpos, maxpos; 
    minpos = min_element(coll.begin(), coll.end()); 
    cout << "min: " << *minpos << '\n'; 
    maxpos = max_element(coll.begin(), coll.end()); 
    cout << "max: " << *maxpos << '\n'; 

    // sort all elements
    sort(coll.begin(), coll.end()); 
    vector<int>::iterator pos = find(coll.begin(), coll.end(), 3); 
    // reverse the order of the found element with value 3 and all following elements
    reverse(pos, coll.end()); 

    vector<int>::iterator i; 
    for (i = coll.begin(); i != coll.end(); ++i) {
        cout << *i << ' '; 
    }
    cout << endl; 

    return 0;
}
