#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int left = 0;
    int right = numbers.size() - 1;
    while (left < right)
    {
        int num1 = numbers[left];
        int num2 = numbers[right];
        if (num1 + num2 == target)
        {
            return {left + 1, right + 1};
        }
        else if (num1 + num2 > target)
        {
            right--;
        }
        else if (num1 + num2 < target)
        {
            left++;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> numbers = {-1, 0};
    int target = -1;
    twoSum(numbers, target);
}