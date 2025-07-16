#include <bits/stdc++.h>

using namespace std;
void reverse(vector<int> &nums, int i, int j)
{
    while (i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}
void rotate(vector<int> &nums, int k)
{
    int size = nums.size();
    k = k % size;
    if (k == 0 || size == 1)
    {
        return;
    }
    int i = 0;
    int j = size - 1;
    reverse(nums, i, j);
    reverse(nums, i, k - 1);
    reverse(nums, k, size - 1);
    // for (auto num : nums)
    // {
    //     cout << num << " ";
    // }
}
int main()
{
    vector<int> nums = {-1, -100, 3, 99};

    rotate(nums, 2);
}