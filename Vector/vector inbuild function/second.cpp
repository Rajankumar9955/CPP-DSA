#include<iostream>
using namespace std;  
#include<vector>  
int main()
{
    vector<int>v;       //in vector don't assign the size of an array 
    v.push_back(23);    //push_back function() adding the element from last of an array
    v.push_back(4);
    v.push_back(20);
    v.push_back(10);
    v.push_back(230);
    v.push_back(5);
    for( auto a:v)
    {
        cout<<a<<"\t";
    }
//==================== vector 2===============================================
cout<<"\nvector 2\n";
  vector<int>c={23,52,36,4,2,3};
  c.push_back(23);
  c.insert(c.begin()+3,200);  //+3 means position of an array || insert means insert the value in an array
  c.insert(c.begin()+4,300);
  for(auto a:c){
        cout<<a<<"\t";
  }
  //===================================
  

  c.pop_back();              //pop_back() function delete one elements form last of an array
  cout<<"\nAfter delete\n";
  for(auto a:c)
  {
    cout<<a<<"\t";
  }


//  ===============================
cout<<"\n";
c.erase(c.begin()+2);   //+ means position of an array || erase function use from delete the elements from any particular index
c.erase(c.begin()+2, c.begin()+4);
for(auto a:c)
{
    cout<<a<<"\t";
}

}