#include <stdio.h>
class Base{
    public:
    void virtual baseFn(){printf("Base V");};
};
class Derived:public Base{
  public:
     void virtual V2(){};
     void virtual baseFn(){printf("Derived D");};
};
int main()
{
   Base b1;
   Derived *d;
   d=&b1; //Upcasting won't work
   //Output main.cpp:23:6: error: invalid conversion from ‘Base*’ to ‘Derived*’ [-fpermissive]Invalid conversion from Based to Derived
   d->baseFn();

    return 0;
}
