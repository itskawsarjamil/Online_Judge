#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int count = 0;
    int flag = 0;
    for (string::reverse_iterator rit = s.rbegin(); rit != s.rend(); ++rit)
    {
        if (*rit != ' ')
        {
            if (flag == 0)
            {
                flag = 1;
            }
            count++;
        }
        else if (flag)
        {
            flag = 0;
            break;
        }
    }
    return count;
}

int main()
{
    string s = "ed ";
    // cin >> s;
    int len = lengthOfLastWord(s);
    cout << len;
}