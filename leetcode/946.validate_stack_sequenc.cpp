#include <bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    stack<int> st;
    int k = 0;
    for (int a : pushed)
    {
        st.push(a);
        while (!st.empty() && st.top() == popped[k])
        {
            st.pop();
            k++;
        }
    }
    return st.empty();
}

// bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
// {
//     stack<int> st;
//     int size = pushed.size();
//     int flag = 1;
//     for (int i = 0, j = 0; i < size; i++)
//     {
//         int popValue = popped[i];

//         if (!st.empty() && st.top() == popValue)
//         {
//             st.pop();
//         }
//         else if (j < size)
//         {
//             while (j < size && popValue != pushed[j])
//             {

//                 st.push(pushed[j]);
//                 j++;
//             }
//             j++;
//             if (j > size)
//             {
//                 flag = 0;
//                 // return flag;
//             }
//         }
//         else
//         {
//             flag = 0;
//             return flag;
//         }
//     }
//     return flag;
// }

int main()
{
    vector<int> pushed = {1, 5, 3, 4, 2};
    vector<int> popped = {4, 3, 2, 1, 2};
    if (validateStackSequences(pushed, popped))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    };
}
