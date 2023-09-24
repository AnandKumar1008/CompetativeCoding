#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 2e5 + 1;
int a[nmax];
ll n, h;

int method(ll b, ll g, ll i, ll h)

{
    if (i >= n)
        return 0;
    if (b < 0)
        return 0;
    if (g < 0)
        return 0;
    int ans = 0;
    if (a[i] >= h)
    {
        ans = max(method(b - 1, g, i, 3 * h), method(b, g - 1, i, 2 * h));
    }
    else
        ans = 1 + method(b, g, i + 1, h + a[i] / 2);
    return ans;
}
void solver()
{
    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << method(1, 2, 0, h) << endl;
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
