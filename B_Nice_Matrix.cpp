#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <iostream>
#include <vector>
#include <algorithm>
ll median(vector<ll> &v)
{
    sort(v.begin(), v.end());
    ll res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        res += abs(v[i] - v[v.size() / 2]);
    }
    return res;
}

void solver()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll res = 0;
    for (ll i = 0; i < n - i - 1; i++)
    {
        for (ll j = 0; j < m - j - 1; j++)
        {

            vector<ll> arr = {a[i][j], a[i][m - j - 1], a[n - i - 1][j], a[n - i - 1][m - j - 1]};
            res += median(arr);
        }
    }
    if (n % 2 == 1)
    {
        for (ll i = 0; i < m - i - 1; i++)
        {
            // ll sum = a[n / 2][i] + a[n / 2][m - i - 1];
            // ll val = sum / 2;
            // res += abs(val - a[n / 2][i]) + abs(val - a[n / 2][m - i - 1]);
            res += abs(a[n / 2][i] - a[n / 2][m - i - 1]);
        }
    }
    if (m % 2 == 1)
    {

        for (ll i = 0; i < n - i - 1; i++)
        {
            res += abs(a[i][m / 2] - a[n - i - 1][m / 2]);
        }
    }
    cout << res << endl;
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