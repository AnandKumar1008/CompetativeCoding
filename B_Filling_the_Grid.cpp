#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
            ans = (ans * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}
void solver()
{
    int n, m;
    cin >> n >> m;
    int row[n + 1], col[m + 1];
    for (int i = 1; i <= n; i++)
        cin >> row[i];
    for (int i = 1; i <= m; i++)
        cin >> col[i];
    int ans = 0;
    bool no = false;
    for (int i = 1; i <= n; i++)
    {
        int val = row[i];
        for (int j = 1; j <= m; j++)
        {
            if (j <= row[i] && col[j] == (i - 1))
            {
                no = 1;
                break;
            }
            if (i <= col[j] && row[i] == j - 1)
            {
                no = 1;
                break;
            }
            if (j > (row[i] + 1) && i > (col[j] + 1))
                ans++;
        }
        if (no)
            break;
    }
    if (no)
    {
        cout << "0" << endl;
    }
    else
        cout << power(2, ans) << endl;
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
