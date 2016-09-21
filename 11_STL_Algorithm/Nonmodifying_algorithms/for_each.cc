#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
using std::for_each; 

class Print {
public: 
    void operator() (int& elem) const {
        cout << elem << ' '; 
    }
}; 

class Add1 {
public: 
    void operator() (int& elem) {
        elem += elem; 
    }
}; 

template<typename T>
class Add2 { 
public: 
    Add2(const T& rhs) : value(rhs) {}

    void operator() (int& elem) const {
        elem += value; 
    }

private: 
    T value; 
}; 

class Sum {
public: 
    Sum() : num(0), sum(0) {}
    void operator() (int elem) {
        num++; 
        sum += elem; 
    }

    operator int () {
        return sum; 
    }

private: 
    long num; 
    long sum; 
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    vector<int> coll(ia, ia+9);

    for_each(coll.begin(), coll.end(), 
             Print()); 
    cout << '\n'; 

    for_each(coll.begin(), coll.end(),
             Add1()); 
    for_each(coll.begin(), coll.end(), 
             Print()); 
    cout << '\n'; 

    for_each(coll.begin(), coll.end(),
             Add2<int>(*coll.begin())); 
    for_each(coll.begin(), coll.end(), 
             Print()); 
    cout << '\n'; 

    long sum = for_each(coll.begin(), coll.end(), 
                        Sum()); 
    cout << "sum = " << sum << endl; 

    return 0; 
}
