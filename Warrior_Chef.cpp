#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, h;
    cin >> n >> h;
    int a[n + 1];
    ll preSum[n + 1];
    preSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        preSum[i] = preSum[i - 1] + a[i];

    if (preSum[n] < h)
    {
        cout << 0 << endl;
        return;
    }
    int l = 1, r = n;
    while (l <= r)
    {
        int m = (l + r) >> 1;
        if (preSum[n] - preSum[m] < h)
        {
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << a[l] << endl;
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
