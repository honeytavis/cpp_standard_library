#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <algorithm>
#include <numeric>

#include <iterator>
using std::ostream_iterator; 

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> coll1(ia, ia+6); 
    list<int> coll2(ia+2, ia+8); 

    cout << "1.inner_product(): coll1 * coll1 = "
         << inner_product(coll1.begin(), coll1.end(), coll1.begin(), 0)
         << '\n'; 

    cout << "2.inner_product(): coll1 * coll1(r) = "
         << inner_product(coll1.begin(), coll1.end(), coll1.rbegin(), 0)
         << '\n'; 

    cout << "3.inner_product(): coll1 * coll2 = "
         << inner_product(coll1.begin(), coll1.end(), coll2.begin(), 0)
         << '\n'; 

    return 0; 
}
