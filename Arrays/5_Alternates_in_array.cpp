#include <iostream>
using namespace std;

int main() {

    int i, n,arr[100];
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    for( i = 0; i < n; i += 2) {
        cout<<arr[i]<<" ";
    }

    return 0;
}