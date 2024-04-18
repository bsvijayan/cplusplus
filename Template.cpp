#include <stdio.h>
#include<iostream>
template<typename X>

void call_with(X val1,X val2)
{
    std::cout<<val1<<" "<<val2<<"\n";
}
int main()
{
   
    call_with(1,2);
    call_with("Hello Sample"," world ");
    call_with(2.34444,3.4444);
    return 0;
}
