#include <bits/stdc++.h>
using namespace std;

// int lengthOfLongestSubstring(string s)
// {
//     int size = s.length();
//     int i = 0;
//     if (size < 2)
//     {
//         return size;
//     }
//     string currentSub = "";
//     currentSub += s[0];
//     int maxLen = 0;
//     for (int j = 1; j < size; j++)
//     {
//         int subLen = currentSub.length();
//         char c = s[j];
//         int k = 0;
//         int flag = 0;
//         while (k < subLen)
//         {
//             if (currentSub[k] == c)
//             {
//                 flag = 1;
//                 break;
//             }
//             k++;
//         }
//         if (flag)
//         {
//             string newSub = "";
//             k++;
//             while (k < subLen)
//             {
//                 newSub += currentSub[k];
//                 k++;
//             }
//             currentSub = newSub;
//             flag = 0;
//             maxLen = maxLen > subLen ? maxLen : subLen;
//         }
//         currentSub += s[j];
//         if (j == size - 1)
//         {
//             int x = currentSub.size();
//             maxLen = maxLen < x ? x : maxLen;
//         }
//     }
//     return maxLen;
// }

int lengthOfLongestSubstring(string s)
{
    int maxLength = 0;
    int left = 0;
    int size = s.length();
    unordered_map<char, int> count;
    for (int right = 0; right < size; right++)
    {
        char c = s[right];
        count[c] = count[c] + 1;
        while (count[c] > 1)
        {
            char leftChar = s[left];
            count[leftChar] = count[leftChar] - 1;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}
int main()
{
    int x = lengthOfLongestSubstring("dvdf");
    cout << x << endl;
}