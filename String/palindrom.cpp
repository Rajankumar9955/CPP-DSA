#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s;
    cin>>s;
    string k=s;
    reverse(k.begin(),k.end());
    cout<<k;
    if(k==s)
    {
        cout<<" This is Pallindrom"<<"\t";
    }
    else
    {
        cout<<" This is not Pallindrom\t";
    }
}