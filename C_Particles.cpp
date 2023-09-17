#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a)
            cin >> i;
        ll sum1 = 0, sum2 = 0, ans = *max_element(a, a + n);
        if (ans <= 0)
        {
            cout << ans << endl;
            continue;
        }
        // cout << ans << "here item" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                sum1 += max(a[i], 0);
            else
                sum2 += max(a[i], 0);
        }
        cout << max(sum1, sum2) << endl;
    }
}