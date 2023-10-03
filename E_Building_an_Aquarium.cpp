#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, amount;
    cin >> n >> amount;
    ll a[n];
    for (ll &i : a)
        cin >> i;
    ll l = 1, r = 1e12;
    while (l <= r)
    {
        ll m = (l + r) >> 1;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (m > a[i])
            {
                sum += m - a[i];
            }
        }
        if (sum > amount)
        {
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << r << endl;
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
