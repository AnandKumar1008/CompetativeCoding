#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll a[n];
    ll mx = 0;
    ll sum = 0;
    for (ll &i : a)
        cin >> i, sum += i, mx = max(mx, i);

    //    ll num=max(mx,(ll)ceil(sum/(n-1)));
    ll num = ceil(sum / (n - 1));
    cout << max(mx, num) * (n - 1) - sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}