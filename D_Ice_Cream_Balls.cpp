#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll l = 1, r = 1e10;
    while (l <= r)
    {
        ll m = (l + r) >> 1;
        ll sum = m + m * (m - 1) / 2;

        if (sum > n)
            r = m - 1;
        else
            l = m + 1;
     }
    ll val = n - r * (r - 1) / 2;
    ll y = n - r * (r - 1) / 2;
    if ((r + 1) * r / 2 <= n)
    {
        cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << "\n";
    }
    else
    {
        cout << r + y << "\n";
    }
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
