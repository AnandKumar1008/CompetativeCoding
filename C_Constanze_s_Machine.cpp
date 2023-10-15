#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
const ll nmax = 1e5 + 2;
ll fact[nmax];
ll power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
            ans = (ans * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}

ll nCr(ll n, ll r)
{
    if (r == 0)
        return 1;

    return (1ll * fact[n] * ((power(fact[n - r], mod - 2) * power(fact[r], mod - 2)) % mod)) % mod;
}
void solver()
{
    string s;
    cin >> s;
    vector<ll> res;
    ll m = 0, w = 0;
    bool no = false;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'u')
        {
            w++;
            if (m)
            {
                res.push_back(m);
                m = 0;
            }
        }
        else if (s[i] == 'n')
        {
            m++;
            if (w)
            {
                res.push_back(w);
                w = 0;
            }
        }
        else if (s[i] == 'm' || s[i] == 'w')
        {
            no = 1;
            break;
        }
        else
        {
            if (w)
                res.push_back(w);
            else if (m)
                res.push_back(m);
            m = 0;
            w = 0;
        }
    }
    if (w)
        res.push_back(w);
    if (m)
        res.push_back(m);
    if (no)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 1;
    for (ll i = 0; i < res.size(); i++)
    {
        if (res[i] <= 1)
            continue;
        ll x = 0;
        ll sum = 0;
        while (x <= res[i] - x)
        {
            sum = (sum + nCr(res[i] - x, x)) % mod;
            x++;
        }
        ans = (ans * sum) % mod;
    }
    cout << ans << endl;
}
int main()
{
    fact[0] = 1;
    for (ll i = 1; i < nmax; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
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
