#include <iostream>
#include <sstream>
 
int alphToInt(std::string str)
{
    int i=0;
    int sign=1;
    int res=0;
    if(str[0]=='-')
    {
        sign=-1;
        i++;
    }
    for(;str[i]!='\0';i++)
    {
        res=res*10+str[i]-'0';
    }
    return res*sign;
    
}
 
int main() {
 
 std::string str="-9123";
 int i=alphToInt(str);
 std::cout<<i;
 
}
