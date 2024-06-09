//char inialize krna prta hai baad mein initialize nahi kr sakte
//string inialize kr sakte hai or baad mein  v initialize  kr sakte
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    s="Rajan_kumar";
    string j(4,'j');
    cout<<s<<"\n";
    cout<<j<<"\n";
    cout<<"enter the name:";
    getline(cin,s);            //getline space ke baad v words print krne ke liye use krte hai
    cout<<s<<"\t";

    cout<<s.length()<<"\n";    //Length () :- for calculate length



    string s1="Bhopol";
    string s2="Bihar";
    s1.append(s2); //concatinate
    cout<<"s1:"<<s1<<"\n";
    cout<<"s2:"<<s2<<"\n";
    cout<<s1+s2; //concatinate 
}