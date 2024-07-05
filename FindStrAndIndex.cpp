/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string>
#include<iostream>
 
 int main()
 {
     std::string str="This is to test it";
     std::string findStr="This is";
     int findIndex=0,fIndex=0;;
     int len=findStr.length();
     bool bFind = false;
     auto index=0;
     for( index=0;index<str.length();index++)
     {
         if(str[index]==findStr[fIndex])
         {
             bFind=true;
             fIndex++;
             if(fIndex==len)
             break;
         }
         else
         {
             fIndex=0;
             bFind=false;
         }
         
     }
     if(bFind)
     {
         std::cout<<"String found";
         std::cout<<"  Len :  "<<index-fIndex;
     }
     
 }
