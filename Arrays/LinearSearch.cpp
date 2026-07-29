#include<bits/stdc++.h>
using namespace std;

    int LinearSearch(vector<int> &nums, int target){
        for (int i = 0; i < nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }

int main(){
    int target = 3;
    vector<int> nums={0,1,0,2,3,0,4,5,6};
    cout<< LinearSearch(nums,target);
    
return 0;
}