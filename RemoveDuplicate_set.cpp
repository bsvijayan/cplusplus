//Remove duplicates in a std::std::array
#include<stdio.h>
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;
void print_duplicates(int array[],int n)
{
    unordered_set<int>intSet;
    unordered_set<int>duplicateSet;
    for(int index=0;index<n;index++)
    {
        if(intSet.find(array[index])==intSet.end())
            intSet.insert(array[index]);
        else
            duplicateSet.insert(array[index]);
    }
    for(auto it=duplicateSet.begin();it!=duplicateSet.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    int array[]={1,2,3,4,1,2,3,4,5,10,4,52,25,21,12,21};
    
    int arraySize=sizeof(array)/sizeof(array[0]);
    print_duplicates(array,arraySize);
    unordered_set<int>intUnordSet; 
   
}
//output
//21 4 3 1 2
