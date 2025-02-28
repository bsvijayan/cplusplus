#include <stdio.h>
#include <iostream>

int main()
{
    int i=7;
    int number=i;
    int count=0;
    while( number > 0 )
    {
         count+=(number & 1);
        number =number >>1;
        
    }
    
    std::cout<<"Count is : "<<count;
}
