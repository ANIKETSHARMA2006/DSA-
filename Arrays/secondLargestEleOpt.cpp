#include<bits/stdc++.h>
using namespace std;

 int secondLargestElement(vector<int>& nums) {
        int maxval=nums[0];
        int secmaxval= -1;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i]>maxval){
            secmaxval=maxval;
            maxval=nums[i];
        }
        else if(nums[i]>secmaxval&&maxval>nums[i]){
            secmaxval=nums[i];
        }
    }
    return secmaxval;
}

int main(){

    vector<int> nums={1,2,3,4,5};
    cout<< secondLargestElement(nums);
return 0;
}