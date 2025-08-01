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
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            B[i] = ar[i] % 10;
        }
        if (n == 1)
        {
            cout << ar[0] % 10 << endl;
            continue;
        }

        else
        {

            vector<int> prefix;
            for (int i = 0; i < n; i++)
            {
                prefix.push_back(B[i]);
                vector<int> temp = prefix;

                sort(temp.begin(), temp.end());
                int size = temp.size();
                int median;
                if (size % 2 == 0)
                {
                    median = min(temp[size / 2], temp[size / 2 - 1]);
                }
                else
                {
                    median = temp[size / 2];
                }
                cout << median << " ";
            }

            cout << "\n";
        }
    }
}