include <stdio.h>
#include<iostream>
using namespace std;
int facto(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=i*fact;
        return fact;
}

int main()
{
    int n=5;
    cout<<facto(n);
    printf("Hello World");

    return 0;
}
//output 120
