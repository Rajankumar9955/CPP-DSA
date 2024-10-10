#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    string s;
    cout<<"Enter the word ";
    cin>>s;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
          s[i]=s[i]+32;
        }
    }
       cout<<s<<"\t";
   
  for(int i=0; i<s.length(); ++i)
  {
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]=s[i]-32;
    }
  }
   cout<<s<<"\t";

}

//=================================
//================one line code for lower case=======================================
// int main()
// {
//     string a="cybrom";
//     transform(a.begin(),a.end(),a.begin(),::tolower);
//     cout<<a;
// }

//================one line for upper case ================================================
// int main()
// {
//     string s;
//     cout<<"enter the word";
//     cin>>s;
//     transform(s.begin(),s.end(),s.begin(),::toupper);
//     cout<<s;
// }

