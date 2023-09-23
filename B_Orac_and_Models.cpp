#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;

    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            if (a[j] > a[i])
                dp[j] = max(dp[i] + 1, dp[j]);
        }
    }
    cout << 1 + *max_element(dp.begin() + 1, dp.end()) << endl;
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
