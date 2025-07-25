#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int size = height.size();
    int l = 0;
    int r = size - 1;
    int maxArea = 0;
    int smallHeight = 1;
    int width = 1;
    while (l < r)
    {
        smallHeight = ((height[l] > height[r]) ? height[r] : height[l]);

        width = r - l;

        int newMaxArea = smallHeight * width;

        // cout << "smallHeight: " << smallHeight << " width: " << width << " newMaxArea: " << newMaxArea << endl;

        if (newMaxArea > maxArea)
        {
            maxArea = newMaxArea;
        }

        if (height[l] > height[r])
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return maxArea;
}

int main()
{
    vector<int> height = {1, 1};
    cout << maxArea(height);
}