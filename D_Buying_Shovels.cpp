#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    ll ans = INT_MAX;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll v1 = i, v2 = n / i;
            if (v1 <= k)
                ans = min(ans, v2);
            if (v2 <= k)
                ans = min(ans, v1);
        }
    }
    cout << ans << endl;
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
