#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;

    string number;
    cin >> number;

    int n1 = number[x - 1] - '0';
    int n2 = number[y - 1] - '0';
    if (n2 != 0 && n1 % n2 == 0)
    {
        cout << "YES\n";
    }
    else if (n1 != 0 && n2 % n1 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}