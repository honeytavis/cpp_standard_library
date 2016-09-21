#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <list>
using std::list; 

#include <string>
using std::string; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

int main()
{
    vector<string> coll1 = {"Hello", "this", "is", "an", "example"}; 
    list<string> coll2; 

    back_insert_iterator<list<string>> iter(coll2); 
    copy(coll1.begin(), coll1.end(), 
         back_inserter(coll2)); 

    move(coll2.begin(), coll2.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    move_backward(coll1.rbegin(), coll1.rend(), 
                  coll2.end()); 
    move(coll2.begin(), coll2.end(), 
         ostream_iterator<string>(cout, " "));  // better than copy(); 
    cout << '\n'; 

    return 0; 
}
