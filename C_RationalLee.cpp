#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll b[k];
    for (ll &i : a)
        cin >> i;
    for (ll &i : b)
        cin >> i;
    sort(b, b + k);
    sort(a, a + n, greater<>());
    ll ans = 0;
    vector<vector<ll>> res(k);
    ll j = n - 1;
    for (int i = 0; i < k; i++)
    {
        res[i].push_back(a[i]);
    }
    // for (j = n - 1; j >= k;)
    // {
    for (int i = k - 1; i >= 0; i--)
    {
        for (int p = 0; p < b[i] - 1; p++)
        {

            res[i].push_back(a[j--]);
        }
    }
    // }
    for (ll i = 0; i < k; i++)
    {
        if (res[i].size() == 1)
        {
            ans += 2 * res[i][0];
        }
        else
            ans += res[i][0] + res[i][1];
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

// #include <algorithm>
// long long t, n, k, a[200007], w[200007], i, p, s;
// main()
// {
//     for (scanf("%lld", &t); t--; printf("%lld\n", s))
//     {
//         for (scanf("%lld%lld", &n, &k), i = p = s = 0; i < n;)
//             scanf("%lld", a + i++);
//         for (i = 0; i < k;)
//             scanf("%lld", w + i++);
//         for (std::sort(a, a + n), std::sort(w, w + k), i = 0; i < k && w[i] < 2; ++i)
//             s += 2 * a[--n];
//         for (; i < k; p += w[--k] - 1)
//             s += a[p] + a[--n];
//     }
// }