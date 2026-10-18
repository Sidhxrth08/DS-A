#include <iostream>
using namespace std;

int main() {
    int nums[100];
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value to remove: ";
    cin >> val;

    int pos = 0;
    int out = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] != val) {
            nums[pos] = nums[i];
            out++;
            pos++;
        }
    }

    cout << "Array after removing " << val << ": ";

    for(int i = 0; i < out; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nNumber of elements: " << out;

    return 0;
}