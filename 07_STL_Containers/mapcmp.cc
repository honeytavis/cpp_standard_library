#include <cctype>
#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 
using std::ios; 

#include <iomanip>
using std::setw; 

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

void fillThenPrint(StringStringMap& coll) {
    coll["Deutschland"] = "Germany"; 
    coll["deutsch"] = "German"; 
    coll["Haken"] = "snag"; 
    coll["arbeiten"] = "work"; 
    coll["hund"] = "dog"; 
    coll["gehen"] = "go"; 
    coll["Unternehmen"] = "enterprise"; 
    coll["unternehmen"] = "undertake"; 
    coll["gehen"] = "walk";
    coll["Bestatter"] = "undertaker"; 

    cout.setf(ios::left, ios::adjustfield); 
    StringStringMap::iterator pos; 
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << setw(15) << pos->first << " "
             << pos->second << '\n'; 
    }
    cout << endl; 
}

int main()
{
    StringStringMap coll1; 
    fillThenPrint(coll1); 

    RunTimeStringCmp ignorecase(RunTimeStringCmp::nocase); 
    StringStringMap coll2(ignorecase); 
    fillThenPrint(coll2); 
    
    return 0; 
}
