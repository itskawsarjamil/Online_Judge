#include <bits/stdc++.h>
using namespace std;
// bool canConstruct(string ransomNote, string magazine)
// {
//     bool result = true;
//     int magazineSize = magazine.length();
//     int ransomNoteSize = ransomNote.length();
//     if (ransomNoteSize > magazineSize)
//     {
//         return false;
//     }
//     unordered_map<char, int> count;
//     for (int i = 0; i < magazineSize; i++)
//     {
//         char ch = magazine[i];
//         count[ch] = count[ch] + 1;
//     }
//     for (int i = 0; i < ransomNoteSize; i++)
//     {
//         char ch = ransomNote[i];
//         if (count[ch])
//         {
//             count[ch]--;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return result;
// }

bool canConstruct(string ransomNote, string magazine)
{
    bool result = true;
    int magazineSize = magazine.length();
    int ransomNoteSize = ransomNote.length();
    if (ransomNoteSize > magazineSize)
    {
        return false;
    }
    int count[26] = {0};
    for (char c : magazine)
    {
        count[c - 'a']++;
    }
    for (char c : ransomNote)
    {
        if (count[c - 'a'])
        {
            count[c - 'a']--;
        }
        else
        {
            return false;
        }
    }

    return result;
}

int main()
{
    bool x = canConstruct("aa", "aab");
    x ? cout << "true" : cout << "false";
}