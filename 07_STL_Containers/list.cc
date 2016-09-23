#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <iterator>
using std::ostream_iterator; 

void printList(list<int>& L) {
    copy(L.begin(), L.end(), 
         ostream_iterator<int>(cout, " ")); 
}

int main()
{
    list<int> coll1, coll2; 
    for (int i = 0; i < 6; ++i) {
        coll1.push_front(i); 
        coll2.push_back(i); 
    }
    
    printList(coll1); 
    cout << '\n'; 
    printList(coll2); 
    cout << '\n'; 

    coll2.splice(find(coll2.begin(), coll2.end(), 3), coll1); 
    printList(coll2); 
    cout << '\n'; 

    coll2.splice(coll1.end(), coll2, coll2.begin(), coll2.end()); 
    printList(coll1); 
    cout << '\n'; 

    coll1.sort(); 
    coll1.unique(); 
    printList(coll1); 
    cout << '\n'; 

    coll2.merge(coll1); 
    cout << "merge(): " << '\n';

    cout << "\tcoll1: "; 
    printList(coll1); 
    cout << '\n'; 

    cout << "\tcoll2: "; 
    printList(coll2); 
    cout << '\n'; 

    return 0; 
}
