// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v{1,2,3,4,5};
//     vector<int>b;
//     int st;
//     cout<<"Enter the step:";
//     cin>>st;
//     int n=v.size();
//     if(st<=n)
//     {
//         for(int i=0; i<n; ++i)
//         {
//         b[(i+st)%n]=v[i];
//        }
//        for(auto k:b)
//        {
//         cout<<k<<"\t";
//        }
//     }
// }




#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 4, 5, 6};
    int st;
    cout << "Enter the step: ";
    cin >> st;
    
    int n = v.size();
    vector<int> b(n);  
    if (st <= n) {
     
        for (int i = 0; i < n; i++) {
            b[(i + st) % n] = v[i];  
        }
        for (auto p : b) {
            cout << p << "\t";
        }
    }
    return 0;
}
