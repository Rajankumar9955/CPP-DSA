#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>v{80,56,57,45,42,54,98,85};
    //if all student will pass then result will be 1.
    cout<<all_of(v.begin(),v.end(),[](int a){return a>40;});

     //if any one will fail then result will be 1;
     cout<<any_of(v.begin(),v.end(),[](int a){return a>40;});

      //if none will pass then result will 1
      cout<<none_of(v.begin(),v.end(),[](int a){return a>100;});
}