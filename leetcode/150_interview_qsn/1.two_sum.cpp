#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int size = nums.size();
    unordered_map<int, int> pairIdx;
    for (int i = 0; i < size; i++)
    {
        int num = nums[i];
        if (pairIdx.find(target - num) != pairIdx.end())
        {
            return {i, pairIdx[target - num]};
        }
        pairIdx[num] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = twoSum(nums, 9);
}