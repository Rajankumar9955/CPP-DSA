// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<pair<int,string>>v={{101,"Rajan"},{102,"Raj"},{103,"hk"}};
//     for(int i=0; i<v.size(); ++i)
//     {
//         cout<<v[i].first<<"\t"<<v[i].second<<"\n";
//     }
// }



// ===================example==================

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<pair<int,string>>v;
    int r,roll;
    string name;
    cout<<"enter how many reconds\n";
    cin>>r;
    for(int i=0; i<r; ++i)
    {
        cout<<"enter roll\n";
        cin>>roll;
        cout<<"enter name\n";
        cin>>name;
        v.push_back(make_pair(roll,name));
        //v.push_back({roll,name});
    }
    cout<<"Display Data\n";
    for(auto p:v){
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
}
