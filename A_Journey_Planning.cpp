#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 1;
int a[N];
int n;

void solver()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, idx;
    pair<int, int> dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = {a[i] - i, i};
    }
    sort(dp, dp + n);
    ll sum = 0, prev = dp[0].first;
    for (int i = 0; i < n; i++)
    {
        if (dp[i].first == prev)
        {
            sum += a[dp[i].second];
        }
        else
            sum = a[dp[i].second];
        ans = max(ans, sum);
        prev = dp[i].first;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
