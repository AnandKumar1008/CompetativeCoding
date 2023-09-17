#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    ll n;
    cin >> n;

    ll a[n];
    ll ad = 4294967295;
    for (ll &z : a)
    {
        cin >> z;
        ad = ad & z;
    }
    ll val = 4294967295;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        val = val & a[i];
        if (val == ad)
        {
            ans++;
            val = 4294967295;
        }
    }
    if (ad == 0)
    {
        cout << ans << endl;
    }
    else
        cout << 1 << endl;
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