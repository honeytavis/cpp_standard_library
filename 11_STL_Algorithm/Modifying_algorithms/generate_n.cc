#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 
using std::back_insert_iterator; 

int func() {
    return 1; 
}

int main()
{
    list<int> coll; 
    back_insert_iterator<list<int>> iter(coll); 

    generate_n(back_inserter(coll),
               5, rand); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    generate(coll.begin(), coll.end(), 
             func); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
