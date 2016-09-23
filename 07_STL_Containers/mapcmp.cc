#include <cctype>
#include <iomanip>

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <map>
using std::map; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

class RunTimeStringCmp {
public: 
    enum cmp_mode {normal, nocase}; 

private: 
    const cmp_mode _mode; 

public: 
    RunTimeStringCmp(cmp_mode mode = normal) 
    : _mode(mode) 
    {}

    bool 
    operator() (const string& s1, const string& s2) const {
        if (_mode == normal) {
            return s1 < s2; 
        } else {
            return lexicographical_compare(s1.begin(), s1.end(), 
                                           s2.begin(), s2.end(), 
                                           nocase_compare); 
        }
    }

private: 
    static bool nocase_compare(char c1, char c2) {
        return toupper(c1) < toupper(c2); 
    }
}; 

typedef map<string, string, RunTimeStringCmp> StringStringMap; 

int main()
{
    return 0; 
}
