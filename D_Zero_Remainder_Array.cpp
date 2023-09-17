#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;
    int mx = 0;
    for (int &it : a)
    {
        cin >> it, it = it % k;
        if (it != 0)
            mx = max(mx, ++mp[it]);
    }
    int mn = INT_MAX;

    for (auto &it : mp)
    {
        if (it.second == mx)
        {
            mn = min(mn, it.first);
        }
    }
    if (mn == INT_MAX)
    {
        cout << 0 << endl;
        return;
    }
    cout << (1ll * k * mx - mn + 1) << endl;
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
