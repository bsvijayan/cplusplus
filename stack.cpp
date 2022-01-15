//stack
/*The std::stack class is a container adaptor that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.

The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. 
The stack pushes and pops the element from the back of the underlying container, known as the top of the stack.*/
/*A C++ stack supports the following basic operations:

push – It adds/pushes an item into the stack.
pop – It removes/pops an item from the stack.
peek – Returns the top item of the stack without removing it.
isFull – Checks whether a stack is full.
isEmpty – Checks whether a stack is empty.*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    std::stack<int>intStack;
    intStack.push(10);
    intStack.push(20);
    cout<<"Elements pushed 10 20 30"<<endl;
    intStack.push(30);
    cout<<"Stack popped element "<<intStack.top()<<endl;

    while(!intStack.empty())
    {
        cout<<"Popped element"<<intStack.top()<<endl;
        intStack.pop();
    }
    
}

//Output
/*Elements pushed 10 20 30
Stack popped element 30

Element popped outPopped element30
Popped element20
Popped element10*/
