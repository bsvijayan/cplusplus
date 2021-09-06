#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    set<std::string>mySet;
    mySet.insert("This ");
    mySet.insert("is ");
    
    mySet.insert("To test");
    mySet.insert(" Set");
    for(std::string x : mySet)
    {
        cout<<x<<" ";
    }
    auto it=mySet.lower_bound("is ");
    if(it==mySet.end())
       cout<<"Element not found ";
    else
       Cout<<"Element is present";
}

//output
 //Set This  To test is  Element is present
