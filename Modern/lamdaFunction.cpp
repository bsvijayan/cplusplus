#include <stdio.h>
#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>
class base
{
    public:
    int i;
    base(int value):i(value)
    {
        
    }
};
void print(const base& b){
    std::cout<<b.i<<"\n";
}

int main()
{
   std::vector<base>vecBase;
   vecBase.push_back(base(20));
   vecBase.push_back(base(30));
   float x=1000.11;   
   auto function=[x,vecBase](int v)->int {std::cout<<"Lamda functions : "<<" " <<vecBase[0].i<<x<<"\n";return 1;};
   
   function(10);
   
   for_each(vecBase.begin(),vecBase.end(),print);
   for_each(vecBase.begin(),vecBase.end(),[](base b){std::cout<<"B accessed";});
 
}
