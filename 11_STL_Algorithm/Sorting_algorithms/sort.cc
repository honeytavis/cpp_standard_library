#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector; 

#include <string>
using std::string; 

#include <deque>
using std::deque; 

#include <algorithm>
#include <functional>
using std::greater; 

#include <iterator>
using std::ostream_iterator; 

class lessLength {
public: 
    bool operator() (const string& s1, const string& s2) {
        return s1.size() < s2.size(); 
    }
}; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    deque<int> coll(ia, ia+9); 
    coll.insert(coll.end(), ia, ia+9); 
    
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    sort(coll.begin(), coll.end(), 
         greater<int>()); 
    move(coll.begin(), coll.end(), 
         ostream_iterator<int>(cout, " ")); 
    cout << '\n'; 

    vector<string> vec1 = {"1xxx", "2x", "3x", "4x", "5xx", "6xxxxx", 
                           "7xx", "8xxx", "9xx", "10xxx", "11", "12x", 
                           "13", "14xx", "15", "16", "17"}; 
    vector<string> vec2(vec1); 

    move(vec1.begin(), vec1.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    sort(vec1.begin(), vec1.end(), 
         lessLength()); 
    move(vec1.begin(), vec1.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    stable_sort(vec2.begin(), vec2.end(), 
                lessLength()); 
    move(vec2.begin(), vec2.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    return 0; 
}
