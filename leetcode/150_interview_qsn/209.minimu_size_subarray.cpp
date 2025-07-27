#include <bits/stdc++.h>
using namespace std;
// int minSubArrayLen(int target, vector<int> &nums)
// {
//     int size = nums.size();
//     int output = 0;
//     sort(nums.begin(), nums.end());
//     int left = 0;
//     int right = size - 1;
//     int mid = 0;
//     int idx = 0;
//     while (left < right)
//     {
//         mid = left + (right - left) / 2;
//         if (nums[mid] == target)
//         {
//             idx = mid;
//             break;
//         }
//         else if (nums[mid] > target)
//         {
//             right = mid - 1;
//             idx = right;
//         }
//         else if (nums[mid] < target)
//         {
//             left = mid + 1;
//             idx = left;
//         }
//     }
//     if (nums[0] >= target || nums[idx] == target)
//     {
//         return 1;
//     }
//     int sum = 0;
//     while (idx >= 0)
//     {
//         int num = nums[idx];
//         if (sum >= target)
//         {
//             break;
//         }
//         sum += nums[idx];
//         output++;
//         idx--;
//     }
//     if (sum < target)
//     {
//         return 0;
//     }
//     return output;
// }

int minSubArrayLen(int target, vector<int> &nums)
{
    int left = 0;
    int right = 0;
    int size = nums.size();
    int min_len = -1;
    int cur_sum = 0;
    for (right; right < size; right++)
    {
        cur_sum += nums[right];
        while (cur_sum >= target)
        {
            if (min_len == -1)
            {
                min_len = right - left + 1;
            }
            else
            {
                if (right - left + 1 < min_len)
                {
                    min_len = right - left + 1;
                }
            }
            cur_sum -= nums[left];
            left++;
        }
    }

    min_len = min_len == -1 ? 0 : min_len;
    return min_len;
}
int main()
{
    vector<int> nums = {12, 28, 83, 4, 25, 26, 25, 2, 25, 25, 25, 12};
    int x = minSubArrayLen(213, nums);
    cout << x;
}