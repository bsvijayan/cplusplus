//Remove duplicates in a std::std::array
#include<stdio.h>
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,21,31,4,5,6,1,21,3,4,6};
    set<int>intSet;
    
    int arraySize=sizeof(array)/sizeof(array[0]);
    for(auto i=0;i<arraySize;i++)
    {
        intSet.insert(array[i]);
    }
    
    for(auto it=intSet.begin();it!=intSet.end();it++)
    {
        cout<<*it<<" ";
    }
    
}
//Answer output//
//Set removes the duplicate elements and it will be ordered
1 3 4 5 6 21 31 
