#include <bits/stdc++.h>
using namespace std;

// string convert(string s, int numRows)
// {
//     int size = s.length();
//     if (size == 1 || numRows >= size || numRows == 1)
//     {
//         return s;
//     }
//     vector<string> rows(numRows);
//     int currentRow = 0;
//     bool goingDown = false;
//     for (const char &c : s)
//     {
//         rows[currentRow] += c;
//         // Change direction when reaching top or bottom
//         if (currentRow == 0 || currentRow == numRows - 1)
//         {
//             goingDown = !goingDown;
//         }
//         currentRow += goingDown ? 1 : -1;
//     }
//     string result;
//     for (const string &row : rows)
//     {
//         result += row;
//     }
//     return result;
// }

string convert(string s, int numRows)
{
    string finalAns;
    int size = s.length();
    if (size == 1 || numRows >= size || numRows == 1)
    {
        return s;
    }
    vector<string> rows(numRows);
    int idx = 0;
    bool direction = true;
    // int d = 0;
    int i = 0;

    while (i < size)
    {
        rows[idx].push_back(s[i]);
        if (idx == 0)
        {
            // d = 1;
            direction = true;
        }
        else if (idx == numRows - 1)
        {
            // d = -1;
            direction = false;
        }
        if (direction)
            idx++;
        else
            idx--;
        // idx += d;
        i++;
    }

    for (auto row : rows)
    {

        finalAns += row;
    }
    return finalAns;
}

// string convert(string s, int numRows)
// {
//     string finalAns;
//     int size = s.length();
//     if (size == 1)
//     {
//         return s;
//     }
//     vector<vector<char>> dynamic2d(numRows);
//     int p, q = 0;
//     int i = 0;
//     while (i < size)
//     {
//         while (p < numRows && i < size)
//         {
//             // check ,.
//             char c = s[i];
//             while (c == ',' || c == '.')
//             {
//                 i++;
//                 c = s[i];
//             }
//             dynamic2d[p][q] = s[i];
//             i++;
//             p++;
//         }
//         q++;
//         p = p - 2;
//         while (p > 0 && i < size)
//         {
//             char c = s[i];
//             while (c == ',' || c == '.')
//             {
//                 i++;
//                 c = s[i];
//             }
//             dynamic2d[p][q] = s[i];
//             i++;
//             p--;
//             q++;
//         }
//     }
//     int count = 0;
//     for (int k = 0; k < numRows; k++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             char c = dynamic2d[k][j];
//             if (c)
//             {
//                 finalAns += c;
//                 count++;
//             };
//             if (count == size)
//             {
//                 break;
//             }
//         }
//     }
//     return finalAns;
// }

int main()
{
    // string s;
    // cin >> s;
    // int row;
    // cin >> row;
    string final;
    final = convert("PAYPALISHIRING", 4);
    cout << final;
}