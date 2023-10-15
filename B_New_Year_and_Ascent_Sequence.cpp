#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    vector<int> a, b;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mx = -1, mn = INT_MAX;
        int x;
        cin >> x;
        bool yes = false;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            if (y > mn)
                yes = true;
            mn = min(y, mn);
            mx = max(mx, y);
        }
        if (!yes)
            a.push_back(mn), b.push_back(mx);
    }
    ans = n * n;
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
    {
        int target = a[i];
        int l = 0, r = b.size() - 1;
        while (l <= r)
        {

            int m = (l + r) >> 1;
            if (b[m] <= target)
                l = m + 1;
            else
                r = m - 1;
        }
        ans -= r + 1;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solver();
}
