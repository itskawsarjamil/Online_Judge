#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a > b;
}
int hIndex(vector<int> &citations)
{
    sort(citations.begin(), citations.end(), comp);
    int i = 0;
    while (i < citations.size() && citations[i] >= i + 1)
    {
        i++;
    }
    return i;
}
int main()
{
    vector<int> citations = {0}; // 1
    // vector<int> citations = {0, 0, 2};
    int res = hIndex(citations);
    cout << res << endl;
}

/*
citations =
[100]

Use Testcase
Output
100
Expected
1


[0]

Use Testcase
Output
1
Expected
0


[0,0,2]

Use Testcase
Output
0
Expected
1




Input: citations = [3,0,6,1,5]
Output: 3




Input: citations = [1,3,1]
Output: 1
*/