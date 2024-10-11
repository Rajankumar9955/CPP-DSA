//stoi:- for convert the string into integer

//to_string:- for convert the integer into string

//(case sensitive:- 0)agar uppar wala small letter mein ho  or niche wala capital letter mein ho to wo retun :-1
//agar uppar wala capital letter mein ho  or niche wala small letter mein ho to wo retun :1
//agar uppar wala cappital letter mein ho  or niche wala capital mein to wo retun :0
//agar uppar wala small letter mein ho  or niche wala small mein ho to wo retun :0


 #include<iostream>
 using namespace std;
 #include<string>
 #include<algorithm>
 int main()
 {
    //=====================sorting function=============
    string s = "5243234";
    sort(s.begin(), s.end()); //ascending
    cout<<"ascending:"<<s<<endl;

    sort(s.begin(),s.end(),greater<int>()); //descending
    cout<<"Descending:"<<s<<endl;

  cout<<"=========== string to integer ===============\n";

    //StringTOinger Conversion (stoi);
    string s1 = "895685325";
    cout<<"String to integer :"<<stoi(s1)+2<<endl;



    cout<<"==========clear function=============\n";

    //==========clear function=============
    string c = "joy";
    c.clear(); //removed data form the string / clear data from the string
    cout<<"value is :"<<c<<endl;



    cout<<"========compare function========================\n";

    //========compare function========================
    string str1 = "bhopal";
    string str2 = "BHOPAL";
    string str3 = "BHOPAL";
    string str4 = "bhopal";
    cout<<str1.compare(str2)<<endl;
    cout<<str3.compare(str4)<<endl;



    cout<<"============Empty function====================\n";

    //=============Empty function================================

    str1.clear();
    if(str1.empty())
    {
        cout<<"Empty!!";
    }
    else
    {
        cout<<"Not Empty";
    }
   

   cout<<"==================erase function==================\n";

   //=====================erase() function===============
   string x="Rajankumar";
   cout<<x<<endl;
   cout<<x.erase(3,3)<<endl; //first 3 belong to how many leave the index ,and second 3 is  how many delete the next 3 index


   cout<<"=====================Find function============\n";

   //Find function in c++;
   string y = "Rajankumarparsauni";
   cout<<y.find("kumar")<<endl;

   cout<<"=================insert function============\n";
   
   //============insert() function==================
   
   string b="Rajankr";
   b.insert(6,"uma"); //6 is an index value , uma is how will you insert in string;
   cout<<b<<endl;

 }