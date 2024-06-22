#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
  forward_list<int >f2;
  f2.push_front(23);
   f2.push_front(22);
    f2.push_front(8);
     f2.pop_front();
      f2.remove(10);
       f2.remove_if([](int a){return a<20;});
       for(auto p:f2)
       {
        cout<<p<<"\t";
       }
}