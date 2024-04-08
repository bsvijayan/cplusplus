/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string>
#include<iostream>

class Employee{
    private:
    int experience;
    std::string Name;
    std::string visaCategory;
    public:
    Employee():experience(20),Name("Saravana VIjayan"),visaCategory("H1b"){
        
    }

    void applySelby()
    {
        std::cout<<"Pleasure to connect with you for C++ role"<<"\n";
        std::cout<<"I am "<<Name<<"   have "<<experience<<" years of experience in IT Industry"<<"\n";
        std::cout<<"8+ Years in (UBS) Capital Markets trading industry"<<"\n";
        std::cout<<"Currently in "<<visaCategory<<"   Visa"<<"\n";
        std::cout<<"Looking forward for C2C and W2 Roles"<<"\n";
        
    }
    
};
        
        int main()
        {
            Employee Saravana;
            Saravana.applySelby();
            return 1;
             
        }

