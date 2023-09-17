#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0, ans = 0;
        int res[n];
        bool flag1 = 1, flag2 = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                c++;
            }
            else
                c--;
            if (c > 0)
            {
                if (flag1)
                    ans++;
                flag1 = 0;
                flag2 = 1;
            }
            else if (c < 0)
            {
                if (flag2)
                    ans++;
                flag2 = false;
                flag1 = 1;
            }
            res[i] = ans % 2 == 0 ? 2 : 1;
        }
        if (c != 0)
            cout << -1;
        else
        {
            cout << (ans >= 2 ? 2 : 1) << endl;
            for (int &i : res)
                cout << i << " ";
        }

        cout << endl;
    }
}