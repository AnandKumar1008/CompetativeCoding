#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 1;
ll n, p, k;
int a[N];

void solver()
{
    cin >> n >> p >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    ll x = p;
    for (int i = 0; i < n; i += 2)
    {
        if (p >= a[i])
            p -= a[i], ans = max(ans, i + 1);
    }
    for (int i = 1; i < n; i += 2)
    {
        if (x >= a[i])
            x -= a[i], ans = max(ans, i + 1);
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
