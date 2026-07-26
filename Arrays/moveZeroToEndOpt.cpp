#include<bits/stdc++.h>
using namespace std;

    void moveZeros(vector<int> &nums){
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }

int main(){
    vector<int> nums={0,1,0,2,3,0,4,5,6};
    moveZeros(nums);
    for (int i = 0; i < nums.size(); i++){
        cout<<nums[i];
    }
    
return 0;
}