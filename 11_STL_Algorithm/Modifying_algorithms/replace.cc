#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <list>
using std::list; 

#include <algorithm>
#include <functional>
using std::less; 
using std::placeholders::_1; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    list<int> coll(ia+1, ia+7); 
    coll.insert(coll.end(), ia+3, ia+9); 

    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    replace(coll.begin(), coll.end(), 6, 42); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    replace_if(coll.begin(), coll.end(), 
               bind(less<int>(), _1, 6), 
               6); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
