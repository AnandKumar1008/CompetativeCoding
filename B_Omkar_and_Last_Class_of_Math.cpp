#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll a, ll b)
{
    return a * b / __gcd(a, b);
}
void solver()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    ll ans = n - 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = min(ans, lcm(i, n - i));
            ans = min(ans, lcm(n / i, n - n / i));
        }
    }
    cout << ans << " " << n - ans << endl;
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