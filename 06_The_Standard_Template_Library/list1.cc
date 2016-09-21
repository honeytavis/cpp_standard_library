#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list;

int main()
{
    list<char> coll; 

    for (char c = 'a'; c <= 'z'; ++c) {
        coll.push_back(c); 
    }

    /// for (auto elem : coll) {
    ///     cout << elem << ' ';  // -std=c++11
    /// }
    list<char>::const_iterator iter; 
    for (iter = coll.begin(); iter != coll.end(); ++iter) {
        cout << *iter << ' ';
    }
    cout << endl; 

    list<char>::iterator pos; 
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        *pos = toupper(*pos); 
    }

    while (!coll.empty()) {
        cout << coll.front() << ' '; 
        coll.pop_front(); 
    }
    cout << endl; 

    return 0; 
}
