#include <stdio.h>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int>intVec={2,4,6,3,2,56,65,3};
    std::sort(intVec.begin(),intVec.end(),[](int a,int b){return a > B});
    
    auto(int & x:intVec)
    {
        std::cout<<x<<" ";
    }
    printf("Hello World");

    return 0;
}
