#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
   std::string str="DESREVER RETCARAHC ";
   int n=str.length();
   
   for(int counter=0;counter<(n/2);counter++)
   {
       std::swap(str[counter],str[n-counter-1]);
   }
   std::cout<<"Swapped String"<<str;
   return 0;
}
