#include <iostream>
using namespace std;

int main() {
    int n,arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int majority = -1;

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    cout << majority;

    return 0;
}