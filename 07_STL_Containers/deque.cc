#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <deque>
using std::deque; 

#include <iterator>
using std::ostream_iterator; 

int main()
{
    deque<string> coll; 

    coll.assign(3, string("string")); 
    coll.push_back("last string"); 
    coll.push_front("first string"); 

    copy(coll.begin(), coll.end(), 
         ostream_iterator<string>(cout, "\n")); 

    coll.pop_front(); 
    coll.pop_back(); 
    for (unsigned i = 1; i < coll.size(); ++i) {
        coll[i] = "another " + coll[i]; 
    }

    coll.resize(4, "resized string"); 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<string>(cout, "\n")); 

    return 0; 
}
