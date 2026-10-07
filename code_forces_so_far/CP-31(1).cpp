#include <bits/stdc++.h>
using namespace std;
int main() // 1903A ki solution[halounixx waali]
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> input;
        for (int i = 0; i < n; i++)
        {
            int S;
            cin >> S;
            input.push_back(S);
        }
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "yes" << endl;
            continue;
        }
        if (k > 1)
        {
            cout << "yes" << endl;
            continue;
        }
        if (k == 1)
            cout << "no" << endl;
    }
    return 0;
}