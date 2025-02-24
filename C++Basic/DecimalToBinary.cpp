#include <iostream>
#include <sstream>
 
void DecimalToBinary(const int& number,std::string& str)
{
    int n=number;
    int reminder=0;
    if(n < 0)
      n = n* -1;
    while(n>0)
    {
        reminder=n%2;
        str+=std::to_string(reminder);
        n=n/2;
    }
    std::reverse(str.begin(),str.end());
}
int main() {
  
  int number=13;
  std::string str="";
  DecimalToBinary(number,str);
  std::cout<<"Binary number : "<<str;
 
}
