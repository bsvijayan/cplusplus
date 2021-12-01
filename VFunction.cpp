/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class NonVirtualClass {
 public:
  void foo() {}
};

class VirtualClass {
 public:
  virtual void foo() {}
};
class VirtualClass1:public VirtualClass {
 public:
  void testing(){};
  //virtual void f2();
  //virtual void f3();
};

int main() {
  cout << "Size of NonVirtualClass: " << sizeof(NonVirtualClass) << endl;
  cout << "Size of VirtualClass: " << sizeof(VirtualClass) << endl;
    cout << "Size of VirtualClass1: " << sizeof(VirtualClass1) << endl;
}
/*
Size of NonVirtualClass: 1
Size of VirtualClass: 8
Size of VirtualClass1: 8*/
