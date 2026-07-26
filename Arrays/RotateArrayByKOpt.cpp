#include<bits/stdc++.h>
using namespace std;

    void RotateArray(vector<int> &nums, int k){
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
    }

int main(){
    vector<int> nums={1,2,3,4,5,6};
    int k=3;
    RotateArray(nums,k);
    for (int i = 0; i < nums.size(); i++){
        cout<<nums[i];
    }
    
return 0;
}