#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s1="welcome";
    string s2="cybrom";
    reverse(s1.begin(),s1.end());
    cout<<s1<<"\n";
    sort(s1.begin(),s1.end()); //accending
    cout<<s1<<"\n";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<"\n";
}

