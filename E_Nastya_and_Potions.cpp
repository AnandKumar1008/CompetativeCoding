#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e5;
ll n;
ll a[nmax + 1];
ll dfs(ll i, vector<ll> &res, vector<vector<ll>> &adj, set<ll> &set)
{
    if (set.count(i))
        return res[i] = 0;
    if (adj[i].size() == 0)
        return res[i] = a[i];
    if (res[i] != -1)
        return res[i];
    long long sum = 0;
    for (auto &it : adj[i])
    {
        sum += dfs(it, res, adj, set);
    }

    return res[i] = min(a[i], sum);
}
void solver()
{
    ll k;
    cin >> n >> k;
    // ll a[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    set<ll> s;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    vector<vector<ll>> adj(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 0; j < x; j++)
        {
            ll potins;
            cin >> potins;
            adj[i].push_back(potins);
        }
    }
    vector<ll> res(n + 1, -1);
    for (ll i = 1; i <= n; i++)
    {
        if (res[i] == -1)
        {

            dfs(i, res, adj, s);
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
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
