#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
// int removeElement(vector<int> &nums, int val)
// {
//     int k = 0;
//     int size = nums.size();

//     int i = 0;
//     int j = nums.size() - 1;
//     while (i <= j)
//     {

//         if (nums[i] == val)
//         {

//             int x = nums[i];
//             nums[i] = nums[j];
//             nums[j] = x;
//             j--;
//             k++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (auto num : nums)
//     {
//         cout << num << " ";
//     }
//     return size - k;
// }

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int k = removeElement(nums, val);
    cout << endl
         << k << endl;
}
