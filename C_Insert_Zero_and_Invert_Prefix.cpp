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
        int a[n];
        for (int &z : a)
            cin >> z;
        vector<int> ans(n);
        int j = 0;
        int k = 0;
        if (a[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                if (k != 0)
                {
                    // j = j - 1;
                    ans[j - 1] = k;
                    // continue;
                }

                ans[j++] = 0;
                k = 0;
            }
            else
            {
                ans[j++] = 0;
                k++;
            }
        }
        if (k != 0)
        {
            ans[n - 1] = k;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}