//missing number

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4>a={0,2,3,4};  //if we start from 0 the include nothing but if start from 1 then include +1
    int n=a.size();
    int sum=n*(n+1)/2;
    int s=0;
    for(int i=0; i<a.size(); ++i){
        s+=a[i];
    }
   cout<<sum-s;




}


