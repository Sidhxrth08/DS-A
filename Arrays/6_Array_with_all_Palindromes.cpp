// Input: arr[] = [111, 222, 333, 444, 555]
// Output: true
// Explanation:
// arr[0] = 111, which is a palindrome number.
// arr[1] = 222, which is a palindrome number.
// arr[2] = 333, which is a palindrome number.
// arr[3] = 444, which is a palindrome number.
// arr[4] = 555, which is a palindrome number.
// As all numbers are palindrome so This will return true.

// Input: arr[] = [121, 131, 20]
// Output: false
// Explanation: 20 is not a palindrome hence the output is false.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

        for(int i=0;i<n;i++){
            
            int digit,rev=0;
            int num = arr[i];
            int original = num;
            
             
            while(num)
            {
                digit = num % 10 ;
                rev =  rev * 10 + digit;
                num = num / 10;
            }
            
            
            if (rev != original){
                cout<<"false";
                return 0;
            }
            
        }
            cout<<"true";

    return 0;
}