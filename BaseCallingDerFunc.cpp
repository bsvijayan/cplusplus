#include <stdio.h>

class Base{
    public:
    void virtual baseFn(){printf("Base V");};
};
class Derived:public Base{
  public:
     void virtual V2(){};
     void derviedFn(){printf("Derived function()");};
     void  baseFn(){printf("Derived D");};
};
int main()
{
    Derived *d,der;
   Base b1,*bPtr;
   
    bPtr=&der;
   //Base Pointer trying to call derived class functions
   bPtr->derviedFn();
    return 0;
}

//Answer
main.cpp:33:10: error: ‘class Base’ has no member named ‘derviedFn’
    bPtr->derviedFn();
