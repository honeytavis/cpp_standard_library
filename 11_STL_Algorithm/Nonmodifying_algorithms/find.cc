#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <functional>
using std::greater; 
using std::less;

#include <iterator>
using std::ostream_iterator; 

class f {
public: 
    bool operator() (int element) {
        return (element % 3 == 0);
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia, ia+9); 
    coll.insert(coll.end(), ia, ia+9); 

    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    list<int>::iterator pos1 = find(coll.begin(), coll.end(), 4); 
    if (pos1 != coll.end()) {
        list<int>::iterator pos2 = find(++pos1, coll.end(), 4); 
        if (pos2 != coll.end()) {
            copy(--pos1, ++pos2, ostream_iterator<int>(cout, " ")); 
            cout << '\n'; 
        }
    }

    vector<int> vec(ia, ia+9); 
    vector<int>::iterator pos = find_if(vec.begin(), vec.end(), 
                                        bind(greater<int>(), std::placeholders::_1, 5)); // -std==c++11
    cout << "There are "
         << distance(pos, vec.end())
         << ". elements greater than 5"
         << '\n'; 

    pos = find_if(vec.begin(), vec.end(), f()); 
    cout << "the "
         << *pos
         << ". is first numbers divisible by 3"
         << '\n'; 

    pos = find_if_not(vec.begin(), vec.end(), 
                      bind(less<int>(), std::placeholders::_1, 5)); 
    cout << "the "
         << *pos
         << ". is first number not less than 5"
         << '\n';

    return 0; 
}
