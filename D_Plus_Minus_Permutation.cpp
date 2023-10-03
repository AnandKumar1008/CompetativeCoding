#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll v1 = n / y;
    ll v2 = n / x;
    ll lcm = (x * y) / __gcd(x, y);
    ll v3 = n / lcm;
    v1 -= v3;
    v2 -= v3;
    cout << (v2 * n - v2 * (v2 - 1) / 2) - v1 * (v1 + 1) / 2 << endl;
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
