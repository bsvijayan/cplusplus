//Details
/*Std::queue
Operations 
1.push element
2.Pop  element
3.Front - Display the front element 1st element
4.size  - Returns the size of the queue
*/
#include <stdio.h>
#include <queue>
#include<iostream>
using namespace std;
int main()
{
    printf("Hello World");
    std::queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    cout<<endl<<"Front element";
    cout<<myQueue.front();
    //popping one element 
    myQueue.pop();
    cout<<myQueue.front();
    cout<<endl<<"Size of Queue"<<myQueue.size();
    return 0;
}

//Output
Front element1020
Size of Queue3
