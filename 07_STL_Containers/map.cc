#include <iomanip>
using std::setw; 
using std::left; 

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <map>
using std::map; 

#include <algorithm>

#include <utility>
using std::pair; 

//bool searchVaule(pair<float, float>& e) { // !!!!!
bool searchVaule(pair<float, float> e) {
    return e.second == 3.0; 
}

int main()
{
    map<string, float> stocks; 
    stocks["BASF"] = 369.50; 
    stocks["VW"] = 413.50; 
    stocks["Daimler"] = 819.00; 
    stocks["BMW"] = 834.00; 
    stocks["Siemens"] = 842.20; 

    map<string, float>::iterator pos; 
    cout << left; 
    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stocks: " << setw(12) << pos->first
             << "price: " << pos->second << '\n'; 
    }
    cout << '\n'; 

    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
         pos->second *= 2;
    }

    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stocks: " << setw(12) << pos->first
             << "price: " << pos->second << '\n'; 
    }
    cout << '\n'; 

    map<float, float> coll = {{1, 7}, {2, 4}, {3, 2}, {4, 3}, 
                              {5, 6}, {6, 1}, {7, 3}}; 

    map<float, float>::iterator iter = coll.find(3.0); 
    if (iter != coll.end()) {
        cout << "key 3.0 found " 
             << '(' 
             << iter->first << ','
             << iter->second
             << ')' << '\n'; 
    }

    iter = find_if(coll.begin(), coll.end(), 
                   searchVaule); 
    if (iter != coll.end()) {
        cout << "Value 3.0 found " 
             << '(' 
             << iter->first << ','
             << iter->second
             << ')' << '\n'; 
    }

    return 0; 
}
