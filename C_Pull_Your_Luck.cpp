#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, x, p;
    cin >> n >> x >> p;
    for (ll i = 1; i <= min(p, 2 * n); i++)
    {
        ll sum = (i * (i + 1)) / 2;
        if (((1ll * x + sum) % n) == 0)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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
