#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, num;
    int k = 1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "   ";
    }

    cout << "\nEnter number to find: ";
    cin >> num;

    for(int i = 0; i < n; i++) {
        if(num == arr[i]) {
            k = 0;
            break;
        }
    }

    if(k == 0) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }

    return 0;
}