#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

int main()
{
    vector<int> ivec; 

    for (int i = 1; i <= 6; ++i) {
        ivec.push_back(i); 
    }

    for (int i = 0; i < ivec.size(); ++i) {
        cout << ivec[i] << ' ';
    }
    cout << endl; 

    return 0; 
}
