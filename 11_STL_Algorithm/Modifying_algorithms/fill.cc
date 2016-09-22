#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <string>
using std::string; 

#include <algorithm>

#include <iterator>
using std::back_insert_iterator; 
using std::ostream_iterator;

int main()
{
    fill_n(ostream_iterator<float>(cout, " "), 10, 6.6); 
    cout << endl; 

    list<string> coll; 
    back_insert_iterator<list<string>> iter(coll); 
    fill_n(back_inserter(coll), 9, "hello"); 

    move(coll.begin(), coll.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    fill(coll.begin(), coll.end(), 
         "world"); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
