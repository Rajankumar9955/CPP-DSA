#include<iostream>
using namespace std;
namespace cybrom{
    int a=100;
}
using namespace cybrom;

   int main()
   {
     int a=200;
     cout<<cybrom::a;
   }

