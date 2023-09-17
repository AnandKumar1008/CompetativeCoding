#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    ll n, c;
    cin >> n >> c;
    ll a[n];
    for (ll &i : a)
        cin >> i;
    ll l = 1, r = 1e9;
    ll sum = 0;
    while (l <= r)
    {
        ll m = (l + r) >> 1;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (2 * m + a[i]) * (2 * m + a[i]);
            if (sum > c)
            {
                sum = LONG_LONG_MAX;
                break;
            }
        }
        if (sum == c)
        {
            cout << m << endl;
            return;
        }
        // cout << sum << endl;
        if (sum > c)
            r = m - 1;
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

    int t;
    cin >> t;
    while (t--)
    {

        solver();
    }
}