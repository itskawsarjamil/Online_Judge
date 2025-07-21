#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int idx = 0;
    // int flag = 1;
    int haystackSize = haystack.length();
    int needleSize = needle.length();
    if (needleSize > haystackSize)
    {
        return -1;
    }
    for (int i = needleSize - 1, k = needleSize - 1; i < haystackSize; i++)
    {
        k = needleSize - 1;
        if (haystack[i] == needle[k])
        {
            int j = i;
            while (j >= 0 && k >= 0 && haystack[j] == needle[k])
            {
                j--;
                k--;
            }
            if ((k == -1))
            {
                idx = j + 1;
                break;
            }
        }
        if (i == haystackSize - 1)
        {
            idx = -1;
        }
    }
    return idx;
}

int main()
{
    string haystack;
    cin >> haystack;
    string needle;
    cin >> needle;
    int idx = strStr(haystack, needle);
    cout << idx;
}