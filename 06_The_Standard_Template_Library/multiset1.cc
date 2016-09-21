#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <set>
using std::multiset; 

int main()
{
    int N, tmp; 
    multiset<int> coll; 

    cin >> N; 
    for (int i = 0; i < N; ++i) {
        cin >> tmp; 
        coll.insert(tmp); 
    }
    
    multiset<int>::const_iterator iter; 
    for (iter = coll.begin(); iter != coll.end(); ++iter) {
        cout << *iter << ' '; 
    }
    cout << endl; 

    return 0; 
}
