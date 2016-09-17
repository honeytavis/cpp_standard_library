#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <forward_list>
using std::forward_list; // -std=c++11

int main()
{
    forward_list<long> coll = {2, 3, 5, 7, 11, 13, 17}; 

    coll.resize(9); 
    coll.resize(10, 99); 

    for (auto elem : coll) {
        cout << elem << ' '; 
    }
    cout << endl; 

    return 0; 
}
