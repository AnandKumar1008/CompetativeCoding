#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int mn = n + 1, mnWin = n + 1;
        while (n--)
        {
            int x;
            cin >> x;
            if (mn < x && x < mnWin)
            {
                ans += 1;
                mnWin = x;
            }
            mn = min(mn, x);
        }
        cout << ans << '\n';
    }
}