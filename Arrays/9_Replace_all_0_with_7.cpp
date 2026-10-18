#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

        if(n == 0){
            cout << 5 << endl;
            return 0;
        }  
            
        int ans = 0;
        int place = 1;

        while(n) {
            
                        
            int digit = n % 10;

            if(digit == 0) {
                digit = 5;
            }

            ans = ans + digit * place;
            place = place * 10;
            n = n / 10;
        }

        cout << ans << endl;

    return 0;
}