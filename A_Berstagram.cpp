#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, m;
    cin >> n >> m;
    int pos[n + 1], val[n + 1], mn[n + 1], mx[n + 1];
    for (int i = 1; i <= n; i++)
    {
        pos[i] = val[i] = mn[i] = mx[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        int p = val[x];
        if (p == 1)
            continue;
        int prev = pos[p - 1];
        pos[p - 1] = x;
        pos[p] = prev;
        val[x] = p - 1;
        val[prev] = p;
        mn[x] = min(mn[x], val[x]);
        mx[x] = max(mx[x], val[x]);
        mn[prev] = min(mn[prev], val[prev]);
        mx[prev] = max(mx[prev], val[prev]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mn[i] << " " << mx[i] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
