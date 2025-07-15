#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 2;
    // int i = 2;
    int size = nums.size();
    for (int i = 2; i < size; i++)
    {
        if (nums[k - 2] != nums[i])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return k;
}
// int removeDuplicates(vector<int> &nums)
// {
// int k = 0, i = 0;
// int j = 0;
// int size = nums.size();
// int count = 1;
// while (j < size)
// {
//     count = 0;
//     if ((k + 1) < size && nums[k] != nums[k + 1])
//     {
//         k++;
//     }
//     else
//     {
//         j = k + 1;
//         while (j < size && nums[j] == nums[k])
//         {
//             j++;
//             count++;
//         }
//         if (j >= size)
//         {
//             break;
//         }
//         while (count)
//         {
//             if ((count + k) < size)
//             {
//                 nums[count + k] = nums[j];
//             }
//             count--;
//         }
//     }
// }
// int maxDuplicate = 2;
// int k = 1;
// int j = 1;
// int size = nums.size();
// int count = 0;
// while (j < size)
// {
//     if (nums[k - 1] != nums[j])
//     {
//         if (count < maxDuplicate)
//         {
//             k++;
//             nums[k] = nums[j];
//             int x = k;
//             int y = j;
//             while (x < j)
//             {
//                 nums[x] = nums[y];
//                 x++;
//                 y++;
//             }
//             k = k + 1;
//         }
//         else
//         {
//             k++;
//             nums[k] = nums[j];
//             int x = k;
//             int y = j;
//             while (x < j)
//             {
//                 nums[x] = nums[y];
//                 x++;
//                 y++;
//             }
//             k++;
//         }
//         count = 0;
//     }
//     else
//     {
//         count++;
//     }
//     j++;
// }
//     for (auto num : nums)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
//     return k;
// }

int main()
{
    // vector<int> nums = {1, 1, 1, 2, 2, 3}; // output: 5
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3, 4}; // output: 7

    int k = removeDuplicates(nums);
    cout << endl
         << k << endl;
}
