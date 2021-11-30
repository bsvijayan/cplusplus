#include <stdio.h>
#include<list>
#include<iostream>
#include<string.h>
using namespace std;
class Graph
{
    int V;//Total number of vertices
    list<int>*adj;//Adjancy list
    public:
       Graph(int v):
       V(v){
           adj=new list<int>[V];
       }
    void addEdges(int node1,int node2)
    {
        adj[node1].push_back(node2);
    }
    
};

int main()
{
    Graph g(3);
   // g.addEdges(1,1,0);
    
    char abc[27]={0};
    char *ptr=abc;
    strncpy(abc,"abcdefghij",10);
    cout<<abc<<" "<<"abc"<<endl;
    cout<<*abc<<" "<<"*abc"<<endl;
    cout<<abc[2]<<"  "<< "abc[2]"<<endl;
    cout<<&abc[3]<<" "<<"&abc[3]"<<endl;
    cout<<(abc+3)<<" "<<"(abc+3)"<<endl;
    cout<<abc+4<<" "<<"abc+4"<<endl;
    cout<<*(abc+3)<<" "<<"*(abc+3)"<<endl;
    cout<<*ptr<<" "<<"*ptr"<<endl;
    cout<<&ptr<<" "<<"&ptr"<<endl;
    cout<<ptr<<" "<<"ptr"<<endl;
    return 0;
}

//output
a *abc
c  abc[2]
defghij &abc[3]
defghij (abc+3)
efghij abc+4
d *(abc+3)
a *ptr
0x7ffd43ac2d18 &ptr
abcdefghij ptr
