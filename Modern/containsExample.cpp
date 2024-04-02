/*C++ 20 */
/*find if a value is found in set and map */
#include <iostream>
#include <algorithm>
#include<set>
#include<map>
int main()
{
    std::set<int>myInt={1,3,4,5,78,8};
    std::map<int,int>myMap={{1,'a'},{2,'b'}};
    if(myInt.contains(1))
    std::cout<<"Set Value found";
    if(myMap.contains(2))
    std::cout<<"Map Value found";
    
    return 0;
}
