//remove 0 from array


#include<iostream>
using namespace std;
#include<array>
int main()
{
  array<int, 5>a={0,0,2,0,4};
  array<int , 5>b;
  int c=0;
  for(int i=0; i<a.size(); ++i)
  {
    if(a[i]!=0)
    {
        b[c]=a[i];
        c++;
    }
  }
  while(c<a.size())
  {
    b[c]=0;
    c++;
  }
  for(auto p:b)
  {
    cout<<p<<"\t";
  }
    
  
}