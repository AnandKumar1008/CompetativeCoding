#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    char a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char mx = max({a[i][j], a[j][n - i + 1], a[n - i + 1][n - j + 1], a[n - j + 1][i]});

            ans += mx - a[i][j];
            ans += mx - a[j][n - i + 1];
            ans += mx - a[n - i + 1][n - j + 1];
            ans += mx - a[n - j + 1][i];
            a[i][j] = mx;
            a[j][n - i + 1] = mx;
            a[n - i + 1][n - j + 1] = mx;
            a[n - j + 1][i] = mx;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}
