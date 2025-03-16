#include <stdio.h>
#include <string>
#include <iostream>
bool alphaNumeric(const char s)
{
    if((s>='0') && (s<='9') || (s>='a') && ( s<='z') || ( s>='A') && (s<='Z'))
       return true;
    else
       return false;
}
char lowerCase(const char c)
{
    if(c >='A' && c<='Z')
    {
        return c+32;
    }
    return c;
}

char upperCase(const char c)
{
    if(c>='a' && c <='z')
    {
        return c-32;
    }
    return c;
}

int main()
{
    std::string str="ACTINGishobbytoPerformit ";
    for(int i=0;i<str.length();i++)
    {
        if(alphaNumeric(str[i]))
        {
          std::cout<<"L: "<<lowerCase(str[i])<<"\n";  
          std::cout<<"U: "<<upperCase(str[i])<<"\n";  
        }
          
    }
    return 0;
}
