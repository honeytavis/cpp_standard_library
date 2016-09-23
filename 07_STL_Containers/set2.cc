#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <set>
using std::set; 

#include <iterator>
using std::ostream_iterator; 

class RunTimeCmp {
public: 
    enum cmp_mode {normal, reverse}; 

private: 
    cmp_mode _mode; 

public: 
    RunTimeCmp(cmp_mode mode = normal) 
    : _mode(mode) 
    {}

    template <typename T>
    bool operator() (const T& lhs, const T& rhs) {
        return (_mode == normal) ? (lhs < rhs) : (lhs > rhs); 
    }

    bool operator== (const RunTimeCmp& rhs) const {
        return rhs._mode == _mode; 
    }
}; 

int main()
{
    set<int, RunTimeCmp> coll1 = {4, 7, 5, 1, 6, 2, 5}; 
    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    RunTimeCmp rtc(RunTimeCmp::reverse); 
    set<int, RunTimeCmp> coll2(rtc);
    // coll2(coll1);
    coll2 = {4, 7, 5, 1, 6, 2, 5};
    copy(coll2.begin(), coll2.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    coll1 = coll2; 
    coll1.insert(3); 
    copy(coll1.begin(), coll1.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    if (coll1.value_comp() == coll2.value_comp()) {
        cout << "coll1 and coll2 have the same sorting criterion" << '\n'; 
    } else {
        cout << "coll1 and coll2 have a different sorting criterion" << '\n'; 
    }

    return 0; 
}
