//Remove duplicates in a std::std::array
#include<stdio.h>
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,10};
    
    int arraySize=sizeof(array)/sizeof(array[0]);
    unordered_set<int>intUnordSet; 
    for(auto i=0;i<arraySize;i++)
    {
        intUnordSet.insert(array[i]);
    }
    for(auto it=intUnordSet.begin();it!=intUnordSet.end();it++)
    {
        cout<<*it<<" ";
    }
}

//Outputs
//5 4 10 3 1 2
