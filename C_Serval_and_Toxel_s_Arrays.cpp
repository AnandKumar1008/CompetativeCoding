#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 1];
    vector<ll> prev(n + 1, 0);
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = n * m * (m + 1);
    for (ll i = 1; i <= m; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (a[x] != y)
        {
            mp[a[x]] += i - prev[x];
            a[x] = y;
            prev[x] = i;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        mp[a[i]] += m + 1 - prev[i];
    }
    for (const auto &[key, value] : mp)
    {
        ans -= (value) * (value - 1) / 2;
    }
    cout << ans << endl;
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
