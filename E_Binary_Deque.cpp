#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cin >> n >> sum;
        int a[n];
        for (int &z : a)
            cin >> z;
        int j = 0, i = 0, ans = -1, total = 0;
        while (j < n)
        {
            total += a[j];
            if (total == sum)
            {
                ans = max(ans, j - i + 1);
                j++;
            }
            else if (total < sum)
            {
                j++;
            }
            else if (total > sum)
            {
                while (total > sum)
                {
                    total -= a[i++];
                }
                if (total == sum)
                {
                    ans = max(ans, j - i + 1);
                }
                j++;
            }
        }
        if (ans == -1)
        {
            cout << -1 << endl;
        }
        else
            cout << n - ans << endl;
    }
}