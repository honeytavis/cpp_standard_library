#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <list>
using std::list; 

#include <algorithm>

int main()
{
    vector<int> vec{1, 1, 2, 3, 4, 5, 6, 7, 8, 9};  // -std=c++11
    list<int> coll{1, 9, 8, 7, 6, 5, 4, 3, 2, 1}; 

    if (is_permutation(vec.begin(), vec.end(), coll.begin())) { // -std=c++11
        cout << "vec and coll have euqal elements\n"; 
    }

    return 0; 
}
