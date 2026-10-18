#include <iostream>
using namespace std;

void duplicateZeros(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) {

            for(int j = n - 1; j > i; j--) {
                arr[j] = arr[j - 1];
            }

            i++;

            if(i < n) {
                arr[i] = 0;
            }
        }
    }
}

int main() {

    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    duplicateZeros(arr, n);

    cout << "Array after duplicating zeros: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}