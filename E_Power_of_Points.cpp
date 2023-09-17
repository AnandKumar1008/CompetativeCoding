#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e5 + 1;
pair<ll, ll> a[nmax];
void solver()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a + 1, a + n + 1);
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll preSum[n + 1], sufSum[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        if (i < n)
        {
            preSum[i] = (a[i + 1].first - a[i].first) * i;
            if (i > 1)
                preSum[i] += preSum[i - 1];

            sufSum[n - i + 1] = (a[n - i + 1].first - a[n - i].first) * i;
            if (i > 1)
                sufSum[n - i + 1] += sufSum[n - i + 2];
        }
        }
    ll res[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        if (i == 1)
            res[a[i].second] = n + sufSum[i + 1];
        else if (i == n)
            res[a[i].second] = n + preSum[i - 1];
        else
            res[a[i].second] = n + preSum[i - 1] + sufSum[i + 1];
    }
    for (ll i = 1; i <= n; i++)
        cout << res[i] << " ";
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