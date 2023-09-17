#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sol(vector<vector<int>> &dp, vector<int> &arr, vector<vector<int>> &a, int idx, bool choose)
{
    if (idx >= arr.size())
        return 0;
    if (dp[idx][choose] != -1)
        return dp[idx][choose];
    int ans = choose + sol(dp, arr, a, idx + 1, 1);
    int ub = upper_bound(a[arr[idx]].begin(), a[arr[idx]].end(), idx) - a[arr[idx]].begin();
    if (ub != a[arr[idx]].size())
    {
        ans = min(ans, sol(dp, arr, a, a[arr[idx]][ub], 0));
    }
    return dp[idx][choose] = ans;
}
void solver()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a[arr[i]].push_back(i);
    }
    vector<vector<int>> dp(n, vector<int>(2, -1));
    int ans = sol(dp, arr, a, 0, true);
    cout << n - ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)

        solver();
}