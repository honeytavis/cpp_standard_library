#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque>
using std::deque; 

#include <algorithm>

class f {
public: 
    bool operator() (int element, int value) {
        return (element % 2) == 1; 
    }
}; 

int main()
{
    int ia[] = {1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6}; 
    deque<int> coll(ia, (ia + sizeof(ia)/ia[0])); 

    deque<int>::iterator pos; 
    pos = search_n(coll.begin(), coll.end(), 3, 7); 
    if (pos != coll.end()) {
        cout << "succeed!" << '\n'; 
    }

    pos = search_n(coll.begin(), coll.end(), 
                   4, 0, f()); 
    if (pos != coll.end()) {
        cout << "first 4 odd elements are: "; 
        for (int i = 0; i < 4; ++i) {
            cout << *pos++ << ' '; 
        }
        cout << '\n'; 
    }

    return 0; 
}
