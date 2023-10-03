#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    int a[n + 1];
    map<int, pair<int, int>> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (mp.count(a[i]))
            mp[a[i]] = {min(mp[a[i]].first, i), max(mp[a[i]].second, i)};
        else
            mp[a[i]] = {i, i};
    }
    vector<int> res(k + 1);
    int prevFirst = INT_MAX;
    int prevSecond = INT_MIN;
    for (int i = k; i >= 1; i--)
    {
        if (mp.count(i))
        {
            auto [first, second] = mp[i];
            int mn = min(first, prevFirst);
            int mx = max(second, prevSecond);
            res[i] = mx - mn + 1;
            prevFirst = mn;
            prevSecond = mx;
        }
        else
            res[i] = 0;
    }
    for (int i = 1; i <= k; i++)
    {
        cout << 2 * res[i] << " ";
    }
    cout << "\n";
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
