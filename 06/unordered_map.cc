#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <unordered_map> // -std=c++11
using std::pair; 
using std::unordered_map; 
using std::unordered_multimap; 

#include <string>
using std::string; 

#include <list>
using std::list; 

int main()
{
    int N; 
    pair<string, string> line; 
    unordered_map<string, string> sequence; 
    unordered_map<string, string> queue; 

    cin >> N; 
    for (int i = 0; i < N; ++i) {
        cin >> line.first; 
        if (i == 0) {
            line.second = "Mystery Award"; 
        } else if (i == N-1) {
            line.second = "Chocolate";
        } else {
            line.second = "Minion"; 
        }
        sequence.insert(line); 
    }
   
    string tmp; 
    list<string> out; 
    unordered_map<string, string>::iterator iter; 
    for (iter = sequence.begin(); iter != sequence.end(); ++iter) {
        tmp = iter->first + ": " + iter->second; 
        out.push_front(tmp); 
    }
    
    list<string>::iterator iter1; 
    for (iter1 = out.begin(); iter1 != out.end(); ++iter1) {
        cout << *iter1 << '\n'; 
    }

    return 0; 
}
