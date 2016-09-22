#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
#include <functional>
using std::less; 
using std::placeholders::_1; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia+1, ia+6); 
    coll.insert(coll.end(), ia+3, ia+9); 
    coll.insert(coll.end(), ia, ia+7); 

    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    vector<int>::iterator pos; 
    pos = remove(coll.begin(), coll.end(), 
                 5); 
    coll.erase(pos, coll.end()); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    coll.erase(remove_if(coll.begin(), coll.end(), bind(less<int>(), _1, 5)),
               coll.end()); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
