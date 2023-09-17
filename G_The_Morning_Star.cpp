#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    map<ll, ll> up, side, diag1, diag2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        up[x]++;
        side[y]++;
        diag1[y - x]++;
        diag2[y + x]++;
    }
    // int ans = 2 * count;
    ll ans = 0;
    for (auto &it : up)
    {
        ll val = it.second;
        ans += val * (val - 1);
    }
    for (auto &it : side)
    {
        ans += it.second * (it.second - 1);
    }
    for (auto &it : diag1)
    {
        ans += it.second * (it.second - 1);
    }
    for (auto &it : diag2)
    {
        ans += it.second * (it.second - 1);
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