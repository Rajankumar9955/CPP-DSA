// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     vector<int>v{1,2,3,4,5,6,7,8,9};
//     int r=v.size();
//     int l=0;
//     int sum=0;
//     int target;
//     cout<<"Enter the target elements:";
//     cin>>target;
//     while(l<r)
//     {
//         sum=v[l]+v[r];
//         if(sum==target)
//         {
//             cout<<"["<<l<<","<<r<<"]";
//             break;
//         }
//           else if(sum<target)
//     {
//         l++;
//     }
//     else if(sum>target)
//     {
//         r--;
//     }
//     }
  
// }


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int l = 0;
    int r = v.size() - 1;
    int sum = 0;
    int target;

    cout << "Enter the target elements: ";
    cin >> target;

    while (l < r) {
        sum = v[l] + v[r];
        if (sum == target) {
            cout << "[" << l << ", " << r << "]" << endl;
            break;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }

    if (l >= r) {
        cout << "No such pair found.\n";
    }

    return 0;
}
