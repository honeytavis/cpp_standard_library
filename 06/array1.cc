#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <array>
using std::array; // -std=c++11

#include <string>
using std::string; 

int main()
{
    array<string, 5> coll = {"hello", "world"}; 
    
    for (int i = 0; i < coll.size(); ++i) {
        cout << i << ": " << coll[i] << endl; 
    }

    return 0; 
}
