#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++)
    {
        int val = nums[i];
        if (seen.find(val) != seen.end() && i - seen[val] <= k)
        {
            return true;
        }
        seen[val] = i;
    }
    return false;
}
int main()
{
    vector<int> numbers = {1, 2, 3, 1};
    int target = 3;
    containsNearbyDuplicate(numbers, target);
}