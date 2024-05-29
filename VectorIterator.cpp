#include<iostream>
#include<stdio.h>
int main()
{
  std::vector<int> v;
  std::vector<int>::iterator it;
  v.push_back(1);
  it = v.begin();
  std::cout << *it;
  v.push_back(2);
  /* Push back may reallocate memory when we push the values */
  std::cout << *it;//This will results will garbage values 
}
