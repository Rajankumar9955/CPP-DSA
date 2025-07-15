
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{0,1,2,3,4,6,7};
    int n=v.size();
    int s=0;
    int sum=n*(n+1)/2;
    cout<<sum<<"\n";
    for(int i=0; i<v.size(); i++){
        s+=v[i];
    }
    cout<<sum-s;

}