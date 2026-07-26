#include<bits/stdc++.h>
using namespace std;

    void moveZeros(vector<int> &nums){
        int i=0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
        }
        for(int k=i;k<nums.size();k++){
            nums[k]=0;
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