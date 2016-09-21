#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque>
using std::deque; 

#include <list>
using std::list; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7}; 
    deque<int> coll(ia, ia+7); 
    coll.insert(coll.end(), ia, ia+7); 
    list<int> subcoll(ia+2, ia+5); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    copy(subcoll.begin(), subcoll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    deque<int>::iterator pos, end = coll.end(); 
    do {
        pos = find_end(coll.begin(), end, 
                       subcoll.begin(), subcoll.end()); 
        if (pos != end) {
            cout << distance(coll.begin(), pos) << '\n'; 
            end = pos; 
            continue; 
        } else {
            --end; 
        }
    } while (pos != coll.begin()); 

    return 0; 
}
