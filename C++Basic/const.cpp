#include <stdio.h>
#include <iostream>
class A
{
    public:
  const int s;
    A():s(10){};
    A(int x):s(x){};
};
//int A::s=0;
int main()
{
   A a(10);
   A a2;
   A a1=a;
    return 0;
}
