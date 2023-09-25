#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 998244353;
ll power(ll a, ll b)
{
    ll ans = 1;
    if (b <= 0)
        return 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return ans;
}
void solver()
{
    ll n;
    cin >> n;
    int a[n], b[n];
    for (int &i : a)
        cin >> i;
    map<int, int> mp;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[a[i]] = x;
        // sum += x;
    }
    int m;
    bool no = false;
    cin >> m;
    int c[m], d[m];
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
        if (!mp.count(c[i]))
            no = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (mp[c[i]] < x)
            no = 1;
        else
            mp[c[i]] -= x;
    }

    if (no)
    {
        cout << "0" << endl;
        return;
    }
    for (auto &it : mp)
    {
        if (it.second != 0)
            sum++;
    }
    // cout << sum << "sum" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += a[i] * b[i];
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     sum += c[i] * d[i];
    // }
    ll res = power(2, sum);
    cout << (res) % mod << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
