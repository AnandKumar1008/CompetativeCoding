#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll sum1 = 0, sum2 = 0;
    ll mn2 = INT_MAX, mn1 = INT_MAX;
    for (ll &i : a)
        cin >> i, sum1 += i, mn1 = min(mn1, i);
    for (ll &i : b)
        cin >> i, sum2 += i, mn2 = min(mn2, i);
    cout << min(1ll * mn1 * n + sum2, 1ll * mn2 * n + sum1) << endl;
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
