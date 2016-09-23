#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia, ia+9); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    vector<int> search; 
    search.push_back(3); 
    search.push_back(4); 
    search.push_back(7); 
    copy(search.begin(), search.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    if (includes(coll.begin(), coll.end(), 
                 search.begin(), search.end())) {
        cout << "all elements of search are also in coll" << '\n'; 
    } else {
        cout << "not all elements of search are also in coll" << '\n'; 
    }

    return 0; 
}
