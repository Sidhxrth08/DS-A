#include<iostream>
using namespace std;

int main(){
    int arr[2][3][3] = {
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    },
    {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    }
};
    int ans[3][3];

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            ans[i][j] = arr[0][i][j] + arr[1][i][j];
        }
    }

    cout << "Addition -> " << endl;
    for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 3;j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        
    return 0;    
}