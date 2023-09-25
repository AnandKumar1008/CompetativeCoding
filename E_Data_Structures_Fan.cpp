#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    int a[n + 1], b[n + 1];
    a[0] = 0;
    int xrZero = 0, xrOne = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        a[i] = a[i] ^ (a[i - 1]);
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            xrZero = xrZero ^ b[i + 1];
        else
            xrOne = xrOne ^ b[i + 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, l, r;
        cin >> x;
        if (x == 2)
        {
            int y;
            cin >> y;
            cout << (y == 0 ? xrZero : xrOne) << " ";
            continue;
        }
        cin >> l >> r;
        xrZero = xrZero ^ (a[r] ^ a[l - 1]);
        xrOne = xrOne ^ (a[r] ^ a[l - 1]);
    }
    cout << endl;
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
