#include <stdio.h>
#include<set>
#include<iostream>
#include<vector>
int main()
{
    
    std::set<int>mySet;
    std::vector<int>buildHeight={333,35,4,2};
    int highIndex=-1;
    std::vector<int>outPut;
    for(int i=buildHeight.size()-1;i>=0;i--)
    {
       if(buildHeight[i]>highIndex)
       {
           highIndex=buildHeight[i];
           outPut.push_back(i);
       }
    }
    for(auto x:outPut)
    {
        std::cout<<x<<" ";
    }
    return 0;
}
