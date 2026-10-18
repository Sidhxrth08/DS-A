#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int odd = 0, even = 0, arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << odd << " " << even;

    return 0;
}