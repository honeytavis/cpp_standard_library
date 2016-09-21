#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <string>
using std::string; 

#include <list>
using std::list; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

int main()
{
    
    vector<string> coll1 = {"Hello", "this", "is", "an", "example"}; // -std=c++11
    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    list<string> coll2; 
    //copy(coll1.begin(), coll1.end(), coll2.begin()); 
    //copy(coll2.begin(), coll2.end(), 
    //     ostream_iterator<string>(cout, " ")); 
    //cout << '\n'; 
    back_insert_iterator<list<string>> iter(coll2);  // -std=c++11
    copy(coll1.begin(), coll1.end(), 
         back_inserter(coll2)); 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 


    copy(coll1.rbegin(), coll1.rend(), coll2.begin()); 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    copy_backward(coll1.begin(), coll1.end(), coll2.end()); 
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
