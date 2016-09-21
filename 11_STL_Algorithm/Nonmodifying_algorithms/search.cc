#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <deque>
using std::deque; 

#include <list>
using std::list; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

class f {
public: 
    bool operator() (int elem, int even) {
        if (even) {
            return (elem % 2) == 0; 
        } else {
            return (elem % 2) == 1; 
        }
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    deque<int> coll(ia, ia+7); 
    list<int> subcoll(ia+3, ia+7); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    copy(subcoll.begin(), subcoll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    deque<int>::iterator iter; 
    iter = search(coll.begin(), coll.end(), 
                  subcoll.begin(), subcoll.end()); 

    if (iter != coll.end()) {
        copy(iter, coll.end(), 
             ostream_iterator<int>(cout, " "));
        cout << '\n'; 
    }

    vector<int> vec(ia, ia+9); 
    copy(vec.begin(), vec.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    bool checkEvenArgs[] = {true, false, true}; 

    vector<int>::iterator pos = vec.begin();
    do {
        pos = search(pos, vec.end(), 
                     checkEvenArgs, checkEvenArgs+3, f());
        if (pos != vec.end()) {
            cout << "subrange start: " << *pos++ << '\n';
        }
    } while (pos != vec.end());

    return 0; 
}
