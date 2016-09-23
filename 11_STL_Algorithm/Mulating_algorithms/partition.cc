#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

class even {
public: 
    bool operator() (int elem) {
        return elem % 2 == 0; 
    }
}; 

class odd {
public: 
    bool operator() (int elem) {
        return elem % 2 != 0; 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll1(ia, ia+9); 
    vector<int> coll2(ia, ia+9); 
    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\t'; 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    vector<int>::iterator pos1, pos2; 
    pos1 = partition(coll1.begin(), coll1.end(), even());
    pos2 = stable_partition(coll2.begin(), coll2.end(), odd());

    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\t'; 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    cout << "first odd element in coll1: " << *pos1 << '\n'; 
    cout << "first even element in coll2: " << *pos2 << '\n'; 

    return 0; 
}
