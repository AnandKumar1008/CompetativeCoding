#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    ll x;
    bool no = 0;
    vector<vector<ll>> a(n, vector<ll>(61, -1));
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        ll j = 0;

        while (x)
        {
            ll val = x % k;
            x = x / k;

            a[i][j++] = val;
        }
    }

    for (ll i = 0; i < 60; i++)
    {

        bool first = true;
        for (ll j = 0; j < n; j++)
        {
            if (a[j][i] == -1 || a[j][i] == 0)
                continue;
            if (a[j][i] > 1)
            {
                cout << "NO" << endl;
                return;
            }
            if (first)
            {
                first = false;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
