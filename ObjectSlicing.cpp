#include <stdio.h>
#include<iostream>
#include <iostream>
using namespace std;

#include <stdio.h>

class Base{
    public:
    void virtual baseFn(){printf("Base V");};
};
class Derived:public Base{
  public:
  int k;
     void virtual V2(){};
     void derviedFn(){
     printf("Derived function()");};
     void  baseFn()
     {
          k=100;
          std::cout<<k;
          printf("Derived ");
     };
          
};
//Avoid Object Slicing use reference
void display(Base& b)
{
    b.baseFn();
}
int main()
{
    Derived *d,der;
   Base b1,*bPtr;
   display(b1);
   display(der);
       return 0;
}
