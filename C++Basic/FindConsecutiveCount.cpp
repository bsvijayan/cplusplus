#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
   std::vector<int>intVec={1,10,33,2,11};
   int n=intVec.size();
   int maxCount=0;
   int count=0;
   std::sort(intVec.begin(),intVec.end());
   for(int i=0;i<n;i++)
   {
       count=1;
       for(int j=1;j<n;j++)
       {
          if( intVec[j]<=intVec[i] )
          {
              count++;
          }
       }
       maxCount=std::max(count,maxCount);
   }
   std::cout<<"Max count"<<maxCount;
   return 0;
}
