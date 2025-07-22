#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int size = s.length();

    if (size == 1)
    {
        return true;
    }

    int k = 0;
    int i = 0;
    while (i < size)
    {

        char c = s[i];
        if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            if (c >= 65 && c <= 90)
            {
                s[k] = c + 32;
            }
            else
            {
                s[k] = c;
            }
            k++;
        }
        i++;
    }

    int l = 0;
    int r = k - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    // cout << s.length();
    // getline(cin, s);
    bool what = isPalindrome(s);
    cout << what;
}