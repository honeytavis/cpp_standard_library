#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <map>
using std::pair; 
using std::multimap; 

#include <string>
using std::string; 

int main()
{
    int N; 
    pair<string, string> record; 
    multimap<string, string> con; 

    cin >> N; 
    for (int i = 0; i < N; ++i) {
        cin >> record.first; 
        if (i == 0) {
            record.second = "first"; 
        } else if (i == N-1) {
            record.second = "laster";
        } else {
            record.second = "middle";
        }
        con.insert(record); 
    }
    
    multimap<string, string>::iterator iter; 
    for (iter = con.begin(); iter != con.end(); ++iter) {
        cout << iter->first << ": " << iter->second << '\n';
    }

    return 0; 
}
