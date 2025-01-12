// how to create a node

#include<iostream>
using namespace std;
class node
{
    public:int data;
    class node *nxt;
    node(int val)
    {
        data=val;
        nxt=NULL;
    } 
};
int main()
{
   node obj(30);
   cout<<obj.data<<"\n";
   cout<<obj.nxt;
}

