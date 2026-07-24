#include <bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &nums)
{
    int maxval = nums[0];
    int secmaxval = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > maxval)
        {
            maxval = nums[i];
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > secmaxval && nums[i] != maxval)
        {
            secmaxval = nums[i];
        }
    }
    return secmaxval;
}

int main()
{
    
    vector<int> nums={1,2,3,4,5};
    
    cout << secondlargest(nums);
    return 0;
}

// class Solution {
// public:
//
//     }
// };