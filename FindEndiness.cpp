#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
   int i=1;
   char *c=(char *)&i;
   if(*c)
      cout<<"Little endian";
   else
      cout<<"Big endian";
}

//THis will print little endian big endian
//depends on the platform
