#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{

    int i = 1;
    int size = nums.size();
    for (int j = 1; j < size; j++)
    {
        if (nums[i - 1] != nums[j])
        {
            nums[i] = nums[j];
            i++;
        }
    }

    // for (auto num : nums)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;
    return i;
}

// int removeDuplicates(vector<int> &nums)
// {
//     int k = 0, i = 0;
//     int j = 0;
//     int size = nums.size();
//     int count = 1;

//     while (j < size)
//     {
//         count = 0;
//         if ((k + 1) < size && nums[k] != nums[k + 1])
//         {
//             k++;
//         }
//         else
//         {
//             j = k + 1;
//             while (j < size && nums[j] == nums[k])
//             {
//                 j++;
//                 count++;
//             }
//             if (j >= size)
//             {
//                 break;
//             }
//             while (count)
//             {
//                 if ((count + k) < size)
//                 {

//                     nums[count + k] = nums[j];
//                 }
//                 count--;
//             }
//         }
//     }
//     // for (auto num : nums)
//     // {
//     //     cout << num << " ";
//     // }
//     // cout << endl;
//     return ++k;
// }

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(nums);
    cout << endl
         << k << endl;
}
