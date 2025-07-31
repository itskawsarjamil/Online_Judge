#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    int size_of_s = s.length();
    int size_of_t = t.length();
    bool answer = true;
    if (size_of_t != size_of_s)
    {
        return false;
    }
    int counter[26] = {0};
    for (int i = 0; i < size_of_s; i++)
    {
        char s_char = s[i];
        char t_char = t[i];
        counter[s_char - 'a']++;
        counter[t_char - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {

        if (counter[i] != 0)
        {
            return false;
        }
    }
    return true;
}
// bool isAnagram(string s, string t)
// {
//     int size_of_s = s.length();
//     int size_of_t = t.length();
//     bool answer = true;
//     if (size_of_t != size_of_s)
//     {
//         return false;
//     }
//     int counter_of_s[26] = {0};
//     int counter_of_t[26] = {0};
//     for (int i = 0; i < size_of_s; i++)
//     {
//         char s_char = s[i];
//         char t_char = t[i];
//         counter_of_s[s_char - 'a']++;
//         counter_of_t[t_char - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         cout << counter_of_t[i] << " " << counter_of_s[i] << "\n";
//         if (counter_of_t[i] != counter_of_s[i])
//         {
//             cout << "not matched" << endl;
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    if (isAnagram("ggii", "eekk"))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}