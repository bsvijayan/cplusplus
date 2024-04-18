/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <mutex>
#include <iostream>

class Single
{
    private:
         static Single* m_SingleInstance;
         static std::mutex m_mutex;
    Single(){};     
    public:
         static Single* createInstance(){
             if(!m_SingleInstance)
             {
                 std::lock_guard<std::mutex>lock(m_mutex);
                 m_SingleInstance=new Single();
             }
             return m_SingleInstance;
         }
    Single(const Single&)=delete;
    Single & operator=(const Single &)=delete;
    void print()
    {
        std::cout<<"Single instance";
    }
    
};
Single *Single::m_SingleInstance=nullptr;
std::mutex Single::m_mutex;
int main()
{
    Single *S1=Single::createInstance();
    S1->print();
}
