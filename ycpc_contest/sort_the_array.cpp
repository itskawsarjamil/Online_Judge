#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {

            int j = 1;
            int k = 0;
            while (j < n)
            {
                if (ar[j - 1] > ar[j])
                {
                    k++;
                    while (j + 1 < n && ar[j] <= ar[j + 1])
                    {
                        j++;
                    }
                }

                j++;
            }
            cout << k << endl;
        }
    }
}