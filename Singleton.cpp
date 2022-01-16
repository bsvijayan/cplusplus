/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<mutex>
using namespace std;
class Singleton
{
   private:
        static Singleton *pInstance;
        static std::mutex mu;
   public:
   string value_;
       Singleton(Singleton &other)=delete;
      void operator=(const Singleton &)=delete;

    std::string value() const{
        return value_;
    }
    Singletonn * GetInstance(const std::string value);
    };
    
    Singleton* Singleton::pInstance(nullptr);
    std::mutex Singleton::mu;
   

  Singleton *Singleton::GetInstance(const std::string value)
  {
      std::lock_guard<std::mutex>lock(mu);
      if(pInstance == nullptr)
      {
           pInstance=new Singleton(value);
      }
      return pInstance;
   }
 
void ThreadFoo(){
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("FOO");
    std::cout << singleton->value() << "\n";
}
void ThreadBar(){
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("BAR");
    std::cout << singleton->value() << "\n";
}

int main()
{   
    std::cout <<"If you see the same value, then singleton was reused (yay!\n" <<
                "If you see different values, then 2 singletons were created (booo!!)\n\n" <<
                "RESULT:\n";   
    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);
    t1.join();
    t2.join();
    return 0;
}

