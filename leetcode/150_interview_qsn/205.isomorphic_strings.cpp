#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> char_mapper_s;
    unordered_map<char, char> char_mapper_t;
    int size = s.length();
    bool result = true;
    for (int i = 0; i < size; i++)
    {
        char chOfS = s[i];
        char chOft = t[i];
        if (char_mapper_s[chOfS])
        {
            if (chOft != char_mapper_s[chOfS])
            {
                return false;
            }
        }
        else
        {
            if (char_mapper_t[chOft])
            {
                return false;
            }
            else
            {
                char_mapper_s[chOfS] = chOft;
                char_mapper_t[chOft] = chOfS;
            }
        }
    }
    return result;
}

int main()
{
    bool x = isIsomorphic("badc", "baba");
    x ? cout << "true" : cout << "false";
}