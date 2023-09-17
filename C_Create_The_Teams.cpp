#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, x;

void solver()
{
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());

    vector<int> dp(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        int ans1 = 0, ans2 = 0;
        int jump = (x - 1) / a[i] + 1;

        if (i + jump - 1 < n)
        {
            ans1 = 1 + dp[i + jump];
        }

        ans2 = dp[i + 1];

        dp[i] = max(ans1, ans2);
    }

    cout << dp[0] << endl;
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