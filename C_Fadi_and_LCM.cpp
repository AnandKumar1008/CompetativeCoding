#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    pair<ll, ll> ans;
    ll req = LONG_LONG_MAX;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll b = n / i;
            if (max(i, b) < req && (i * b / __gcd(i, b)) == n)
            {
                req = max(i, b);
                ans = {i, b};
            }
        }
    }
    cout << ans.first << " " << ans.second << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
