#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n, p, d;
    cin >> n;
    cin >> p >> d;
    vector<char> a(n);
    for (char &i : a)
        cin >> i;
    int x, y;
    cin >> x >> y;
    vector<int> dp(n + 1, 0);
    int ans = INT_MAX;
    p--;
    for (int i = n - 1; i >= p; i--)
    {
        dp[i] = (a[i] == '0' ? x : 0);
        if (i + d < n)
            dp[i] += dp[i + d];
        ans = min(ans, dp[i] + (i - p) * y);
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
