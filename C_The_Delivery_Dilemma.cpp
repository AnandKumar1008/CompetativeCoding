#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nMAX = 2e5 + 2;
pair<ll, ll> arr[nMAX];
void solver()
{
    ll n;
    cin >> n;
    ll x;
    for (ll i = 0; i < n; i++)
        cin >> x, arr[i].first = x;
    for (ll j = 0; j < n; j++)
        cin >> x, arr[j].second = x;
    arr[n] = {0, 0};
    sort(arr, arr + n);
    for (ll i = n - 1; i >= 0; i--)
    {
        arr[i].second = arr[i].second + arr[i + 1].second;
    }
    ll ans = arr[0].second;
    for (ll i = 1; i < n + 1; i++)
    {

        ans = min(ans, max(arr[i].second, arr[i - 1].first));
    }
    cout << ans << endl;
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