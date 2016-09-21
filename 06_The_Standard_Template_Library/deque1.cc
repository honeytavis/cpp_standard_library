#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque>
using std::deque; 

int main()
{
    deque<double> coll; 
    for (int i = 1; i <= 6; ++i) {
        coll.push_front(i * 1.1); 
    }

    for (int i = 0; i < coll.size(); ++i) {
        cout << coll[i] << ' '; 
    }
    cout << endl; 

    return 0; 
}
