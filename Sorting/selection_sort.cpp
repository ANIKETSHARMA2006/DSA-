#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
}

vector<int> selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int minval = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minval])
            {
                minval = j;
            }
        }
        swap(nums[i], nums[minval]);
    }
    printarray(nums);
    return nums;
}

int main()
{

    vector<int> nums = {6, 5, 4, 3, 2, 1};

    selectionSort(nums);

    return 0;
}