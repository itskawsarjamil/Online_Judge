#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    bool output = true;
    unordered_map<char, string> pattern_mapper;
    unordered_map<string, char> string_mapper;

    int size = pattern.size();
    stringstream ss(s);
    vector<string> sArray;
    string word;
    while (ss >> word)
    {
        sArray.push_back(word);
    }
    if (sArray.size() != size)
    {
        return false;
    }
    for (int i = 0; i < size; i++)
    {
        string word = sArray[i];
        char ch = pattern[i];
        if (pattern_mapper[ch].size())
        {
            if (pattern_mapper[ch] != word)
            {
                return false;
            }
        }
        else
        {
            if (string_mapper[word])
            {
                if (string_mapper[word] != ch)
                {
                    return false;
                }
            }
            else
            {

                pattern_mapper[ch] = word;
                string_mapper[word] = ch;
            }
        }
    }
    return output;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    if (wordPattern("aaa", "aa aa aa aa"))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}