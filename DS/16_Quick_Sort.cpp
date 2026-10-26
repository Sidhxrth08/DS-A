#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>  &arr,int low,int high){
    int idx = low - 1;
    int pivot = arr[high];

    for(int j = low;j < high;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[high],arr[idx]); 

    return idx;

}

void Quick_Sort(vector<int>  &arr,int low,int high){
    if(low < high){
        int pivot_idx = partition(arr,low,high);

        Quick_Sort(arr,low,pivot_idx - 1);
        Quick_Sort(arr,pivot_idx + 1,high);
    }
}

int main(){
    vector<int> nums = {4,7,3,8,5,1,9};

    Quick_Sort(nums,0,nums.size() - 1);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;


}