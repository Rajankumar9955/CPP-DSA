//class is a user defined data type


// #include<iostream>
// using namespace std;
// template<class x> // function based template
// x sum(x a, x b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<sum(2,3)<<"\n";
//     cout<<sum(23.1,12.5)<<"\n";
   
// }


#include<iostream>
using namespace std;
template<class x,class y>
y sum(x a, y b)
{
    return a+b;
}
int main()
{
    cout<<sum(2,3.9)<<"\n";
    cout<<sum(23.25,23.25);
}