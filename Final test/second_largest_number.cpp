#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {12, 45, 618, 45, 89, 67};

    int first = INT_MIN, second = INT_MIN;

    for (int num : nums) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }

    if (second == INT_MIN)
        cout << "No second largest element exists." << endl;
    else{
        cout << "Second largest element is: " << second << endl;
    }
    return 0;
}
