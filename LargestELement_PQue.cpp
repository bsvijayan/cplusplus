//Return Largest element in array
#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4,1,2,3,495,10,4,52,25,21,12,21};
    int arraySize=(sizeof(array)/sizeof(array[0]));
    priority_queue<int>pQueue;
    for(int i=0;i<arraySize;i++)
    pQueue.push(array[i]);
  
   cout<<pQueue.top();
   //Print largest element in the std::queue
   //It's heap
}
//output
//495 largest element 
