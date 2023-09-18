#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e5 + 1;
ll a[nmax];
ll b[nmax];
ll c[nmax];
void solver()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        cin >> b[i];
        c[i] = b[i];
        b[i] += b[i - 1];
    }
    vector<ll> check(n + 5, 0);
    vector<ll> ans(n + 5, 0);
    for (ll i = 1; i <= n; i++)
    {
        ll l = i, r = n;
        while (l <= r)
        {
            ll m = (l + r) >> 1;
            ll val = b[m] - b[i - 1];

            if (a[i] >= val)
            {
                l = m + 1;
            }
            else
                r = m - 1;
        }

        check[i]++;
        check[l]--;
        ans[l] += a[i] - (b[l - 1] - b[i - 1]);
    }
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        count += check[i];

        ans[i] += c[i] * count;
        cout << ans[i] << " ";
    }
    cout << endl;
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
