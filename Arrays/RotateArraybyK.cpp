#include<bits/stdc++.h>
using namespace std;

    void RotateArray(vector<int> &nums, int k){
        int n=nums.size();
        k=k%n;
        vector<int> temp;
        //initalize the temp array with k index's
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }
        for(int i=k;i<n;i++){
            nums[i-k]=nums[i];
        }
        for(int i=n-k;i<n;i++){
            nums[i]=temp[i-(n-k)];
        }
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