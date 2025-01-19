#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
   std::string str="ABCBA";
   int n=str.length();
   bool bPalind=false;
   for(int counter=0;counter<(n/2);counter++)
   {
       if(str[counter]!=str[n-counter-1])
       {
          bPalind = false;
          break;
       }
       else
          bPalind = true;
   }
   
   if(bPalind)
   {
      std::cout<<"Palindrome";
   }
   else
      std::cout<<"Not a palindrome";
   
   return 0;
}
