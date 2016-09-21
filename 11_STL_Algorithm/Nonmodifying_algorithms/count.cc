#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

class Even {
public: 
    bool operator() (int elem) {
        return (elem % 2) == 0; 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 4, 6, 7, 8, 9}; 
    vector<int> coll(ia, ia+9); 

    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    int num = count(coll.begin(), coll.end(), 4); 
    cout << "num = " << num << '\n'; 

    num = count_if(coll.begin(), coll.end(), Even()); 
    cout << "There are " << num  << " even numbers in tatal." << '\n';

    return 0; 
}
