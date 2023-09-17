#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[k];
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    sort(b, b + k);
    sort(a, a + n, greater<>());
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        int x = b[i];
        int prev;
        if (i > 0)
            prev = b[i - 1];
        else
            prev = 0;
        int mx = 0, mn = INT_MAX;
        for (int j = i; x > 0;)
        {
            mx = max(a[j], mx);
            mn = min(a[j], mn);
            x--;
            prev--;
            if (prev > 0)
                j += k;
            else
                j += k - i;
        }
        // cout << mx << "mx mn " << mn << endl;
        ans += mx + mn;
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
