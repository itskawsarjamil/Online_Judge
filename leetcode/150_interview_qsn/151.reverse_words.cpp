#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans;
    string word;
    int count = 0;
    int flag = 0;
    int size = s.size();
    if (size == 1)
    {
        if (s[0] != ' ')
            return s;
        else
            return "";
    }
    for (string::reverse_iterator rit = s.rbegin(); rit != s.rend();
         ++rit)
    {

        if (*rit != ' ')
        {
            if (flag == 0)
            {
                flag = 1;
                word = *rit;
                count = 1;
            }
            else
            {
                word += *rit;
                count++;
            }
        }
        else if (flag)
        {
            flag = 0;
            int i = 0;
            int end = word.size() - 1;
            while (i < end)
            {
                char temp = word[i];
                word[i] = word[end];
                word[end] = temp;
                i++;
                end--;
            }
            // cout << word << " ";
            ans += word;
            string::reverse_iterator temp = rit;
            while (temp != s.rend() && *temp == ' ')
            {
                temp++;
            }
            if (temp != s.rend())
            {

                ans += " ";
            }
        }
        size--;
    }
    if (flag)
    {
        flag = 0;
        int i = 0;
        int end = word.size() - 1;
        while (i < end)
        {
            char temp = word[i];
            word[i] = word[end];
            word[end] = temp;
            i++;
            end--;
        }
        ans += word;
    }
    return ans;
}

int main()
{
    string s = "";
    getline(cin, s);
    s = reverseWords(s);
    // cout << s << endl;
}