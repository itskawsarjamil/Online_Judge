#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    bool ans = true;
    int i = 0, j = 0;
    int sizeOfT = t.length();
    int sizeOfS = s.length();
    while (i < sizeOfS && j < sizeOfT)
    {
        if (s[i] != t[j])
        {
            j++;
        }
        else if (s[i] == t[j])
        {
            i++;
            j++;
        }
    }
    if (i != sizeOfS)
    {
        ans = false;
    }
    return ans;
}
// bool isSubsequence(string s, string t)
// {
//     int frequencyOfT[26] = {0};
//     bool ans = true;
//     for (char c : t)
//     {
//         int idx = c - 'a';
//         frequencyOfT[idx]++;
//     }
//     for (char c : s)
//     {
//         int idx = c - 'a';
//         if (frequencyOfT[idx])
//         {
//             frequencyOfT[idx]--;
//         }
//         else
//         {
//             ans = false;
//             break;
//         }
//     }
//     return ans;
// }

int main()
{
    bool x = isSubsequence("aaaaaa", "bbaaaa");
    string ans = x ? "true" : "false";
    cout << ans << endl;
}