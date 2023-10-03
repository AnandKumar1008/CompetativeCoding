#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll &i : a)
        cin >> i;
    ll b[n];
    for (ll &i : b)
        cin >> i;
    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c, c + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll l = i, r = n - 1;
        if (c[i] > 0)
        {
            ans += n - i - 1;
            continue;
        }
        while (l <= r)
        {
            ll m = (l + r) >> 1;
            if (c[m] > abs(c[i]))
                r = m - 1;
            else
                l = m + 1;
        }
        ans += n - l;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
