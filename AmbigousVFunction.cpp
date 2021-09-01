#include <stdio.h>
#include<iostream>
#include <iostream>
using namespace std;

class FooInterface {
public:
	virtual ~FooInterface() = default;
	virtual void Foo() = 0;
};

class BarInterface {
public:
	virtual ~BarInterface() = default;

	virtual void Bar() = 0;
};

class Concrete : public FooInterface, public BarInterface {
public:
	void Foo() override { cout << "Foo()" << endl; }
	void Bar() override { cout << "Bar()" << endl; }
};

int main() {
	Concrete c;
	c.Foo();
	c.Bar();

	FooInterface* foo = &c;
	foo->Foo();

	BarInterface* bar = (BarInterface*)(foo);
	bar->Bar(); // Prints "Foo()" - WTF?
}

//This prints
Foo()
Bar()
Foo()
Foo()
