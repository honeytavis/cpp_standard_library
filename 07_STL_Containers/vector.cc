#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <vector>
using std::vector; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

int main() 
{
    vector<string> sentence; 
    sentence.reserve(5); 
    sentence.push_back("Hello,"); 
    sentence.insert(sentence.end(), {"how", "are", "you", "?"}); // -std=c++11 

    copy(sentence.begin(), sentence.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    cout << "max_size(): " << sentence.max_size() << '\n'; 
    cout << "size(): " << sentence.size() << '\n'; 
    cout << "capacity(): " << sentence.capacity() << '\n'; 

    swap(sentence[1], sentence[3]); 
    sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always"); 
    sentence.back() = "!"; 

    copy(sentence.begin(), sentence.end(), 
         ostream_iterator<string>(cout, " ")); 
    cout << '\n'; 

    cout << "size(): " << sentence.size() << '\n'; 
    cout << "capacity(): " << sentence.capacity() << '\n'; 

    sentence.pop_back(); 
    sentence.pop_back(); 
    sentence.shrink_to_fit(); // -std=c++11

    cout << "size(): " << sentence.size() << '\n'; 
    cout << "capacity(): " << sentence.capacity() << '\n'; 

    return 0; 
}
