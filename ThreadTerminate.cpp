#include <stdio.h>
#include<thread>
#include<iostream>
#include<unistd.h>
using namespace std;
void myThread()
{
    sleep(1);
    try
    {
        throw 100;
    }
    catch(exception e)
    {
        cout<<"Catch called";
    }
    cout<<"THis is from mythread"<<endl;
    
}
void my_handler()
{
    cout<<"Terminate Called"<<endl;
    abort();
}
int main()
{
    set_terminate(my_handler);//My terminate handler.
    std::thread thr1(myThread);
    thr1.join();
    std::thread thr2(myThread);
    std::thread thr3(myThread);
   // thr2.join();
    thr3.join();
    printf("Hello World");

    return 0;
}
//output 
//Terminate called
