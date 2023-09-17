#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll nCr(ll x, ll y)
{
    return x * (x - 1) / 2;
}
void solver()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int &z : a)
        cin >> z;
    sort(a, a + n);
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[i] = nCr(n - i - 1, 2);
            continue;
        }
        b[i] = b[i - 1] + nCr(n - i - 1, 2);
    }
    while (q--)
    {
        ll k;
        cin >> k;
        ll l = 0, r = n - 2;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (b[m] >= k)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << a[l] << endl;
    }
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