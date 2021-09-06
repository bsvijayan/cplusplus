*******************************************************************************/
#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}
int main()
{
vector<int>myVect={1,3,7,17,19};
//Sorting elements
sort(myVect.begin(),myVect.end());
//o(NlogN)

//Already sorted
//Find if element is present or not
bool present=binary_search(myVect.begin(),myVect.end(),4);

myVect.push_back(100);
myVect.push_back(100);

myVect.push_back(100);
myVect.push_back(100);

std::vector<int>::iterator it=lower_bound(myVect.begin(),myVect.end(),100);
std::vector<int>::iterator it2=upper_bound(myVect.begin(),myVect.end(),100);
cout<<*it;
cout<<it2-it;

sort(myVect.begin(),myVect.end(),f);

for(auto it=myVect.begin();it!=myVect.end();it++)
    cout<<*it<<" " ;
}
//output
1004100 100 100 100 19 17 7 3 1 
