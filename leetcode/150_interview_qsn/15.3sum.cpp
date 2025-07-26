#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    unordered_map<int, int> idx;
    vector<vector<int>> result;
    int size = nums.size();
    sort(nums.begin(), nums.end());
    // for (auto num : nums)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int k = size - 1;
        int j = i + 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum)
            {
                if (sum > 0)
                {
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
            }
            else
            {
                result.push_back({nums[i], nums[j], nums[k]});
                int x = nums[j++];
                while (j < k && nums[j] == x)
                {
                    j++;
                }
            }
        }
    }
    // for (auto nums : result)
    // {
    //     cout << "[";
    //     for (auto num : nums)
    //     {
    //         cout << num << " ";
    //     }
    //     cout << "]" << endl;
    // }
    return result;
}

int main()
{
    vector<int> nums = {0, 1, 1};
    threeSum(nums);
}