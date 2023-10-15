#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll rec(vector<vector<ll>> &a, ll j, ll i, vector<vector<int>> &dp)
{
    if (i >= a.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll sum = INT_MAX;
    if (j + 1 < a[i].size())
        sum = a[i][j + 1] + rec(a, j + 1, i + 1, dp);
    ll sum1 = a[i][j] + rec(a, j, i + 1, dp);
    return dp[i][j] = min(sum, sum1);
}
void solver()
{
    ll n;
    cin >> n;
    // ll a[n+1][n+1];
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    vector<vector<ll>> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= i; j++)
        {
            ll x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    cout << rec(a, 0, 1, dp) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}
