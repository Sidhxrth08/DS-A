// Input: x = 9, arr[] = [10, 1, 2, 8, 4, 5] 
// Output: 5
// Explanation: The 5 elements are 1, 2, 8, 4 and 5.

// Input: x = 2, arr[] = [1, 2, 2, 5, 7, 2, 9] 
// Output: 4 
// Explanation: The 4 elements are 1, 2, 2 and 2.

#include <iostream>
using namespace std;

int main() {
    int n, x, count = 0,arr[100];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the element to compare: ";
    cin >> x;
    
   
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        if (arr[i] < x) {
            count++;
        }
    }
    cout << "Number of elements smaller than " << x << " is: " << count << endl;
    return 0;
}