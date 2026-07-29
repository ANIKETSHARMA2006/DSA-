#include<bits/stdc++.h>
using namespace std;

    vector<int> UnionOfTwoSortedArray (vector<int> &nums1,vector<int> &nums2){
        set<int> st;
        vector<int> res;
        for(int i=0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            st.insert(nums2[i]);
        }
        for(auto it:st){
            res.push_back(it);
        }
        return res;
    }
    

int main(){
 vector<int> nums1={1,2,3,4,5};
 vector<int> nums2={1,2,3,4,5,6,7};
    auto res=UnionOfTwoSortedArray(nums1,nums2);
    for (int i = 0; i < res.size(); i++){
        cout<<res[i];
    }
    
return 0;
}