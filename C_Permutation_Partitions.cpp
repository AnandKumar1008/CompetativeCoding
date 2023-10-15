#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 998244353;
void solver()
{
    ll n, k;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
        cin >> i;
    ll d = n - k, c = 0;
    ll sum = n * (n + 1) / 2 - d * (d + 1) / 2;

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= n - k + 1)
            res.push_back(c), c = 0;
        else
            c++;
    }
    res.push_back(c);
    ll ans = 1;
    for (int i = 1; i < res.size() - 1; i++)
    {
        if (res[i] > 0)
        {
            ans = (ans * (res[i] + 1)) % mod;
        }
    }
    cout << sum << " " << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
