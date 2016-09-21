#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <list>
using std::list; 

#include <algorithm>

class f {
public: 
    bool operator() (int val1, int val2) {
        return (val1 % 2) == (val2 % 2); 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> vec(ia, ia+7); 
    list<int> coll(ia+2, ia+9);

    if (equal(vec.begin(), vec.end(), coll.begin())) {
        cout << "vec == coll" << '\n'; 
    } else {
        cout << "vec != coll" << '\n'; 
    }

    if (equal(vec.begin(), vec.end(), coll.begin(), f())) {
        cout << "even and odd elements correspond" << '\n'; 
    } else {
        cout << "even and odd elements do not correspond" << '\n'; 
    }

    return 0; 
}

