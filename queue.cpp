//Details
//Queue
//A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). 
//A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing.
 //  In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.
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
