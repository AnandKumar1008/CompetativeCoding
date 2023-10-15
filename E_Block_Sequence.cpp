#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(vector<int> &arr, int i, vector<int> &dp)
{
    if (i == arr.size())
        return 0;
    if (i > arr.size())
        return INT_MAX;
    if (dp[i] != -1)
        return dp[i];

    return dp[i] = min(1 + check(arr, i + 1, dp), check(arr, i + arr[i] + 1, dp));
}
void solver()
{
    ll n;
    cin >> n;
    vector<int> dp(n + 2, -1);
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    cout << check(a, 0, dp) << endl;
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
