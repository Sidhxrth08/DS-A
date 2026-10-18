#include <iostream>
using namespace std;

int main() {
    int sum=0, n;
    cin >> n;

    // code here
    for(int i=1;i<=n;i++){
        sum += i;
    }

    cout<<sum;
    return 0;
}