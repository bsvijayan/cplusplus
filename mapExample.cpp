/*
Maps are associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. No two mapped values can have same key values.
Operations
1.insert
2.Access by key map[key]
3.Erase 
4.lower_bound
5.max_size 
*/
#include <stdio.h>
#include<map>
#include<iostream>
using namespace std;
int main()
{
    std::map<int,int>intMap;
    intMap.insert(pair<int,int>(1,11));
    intMap.insert(pair<int,int>(2,22));
    intMap.insert(pair<int,int>(3,33));
    intMap.insert(pair<int,int>(4,44));
    if( ! (intMap.insert(pair<int,int>(1,22)).second ))
        cout<<"Duplicate element";
    cout<<intMap[1];
    intMap.erase(1);
    cout<<endl<<"Map Size"<<intMap.size()<<endl;
    cout<<intMap[4];
    cout<<"Lower bound (4) : "<<intMap.lower_bound(10)->second;
    cout<<"Maximum elements can store : "<<intMap.max_size();
    cout<<"Map clear() ";
    intMap.clear();
    cout<<endl<<"Size of map : "<<intMap.size();
    return 0;
}
