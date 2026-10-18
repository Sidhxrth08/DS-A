// 0 2 0 1 5   --->  2 1 5 0 0

#include <iostream>
using namespace std;

int main() {
    int i, pos, temp, n, arr[100];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pos = 0;

    for(i=0;i<n;i++){
        if(arr[i] != 0){
            temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos++;
        }
    }
    
    cout << "Array after moving zeros to the end: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}