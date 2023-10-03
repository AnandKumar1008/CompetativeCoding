#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, a, b;
    cin >> a >> b >> n;
    ll arr[n];
    ll ans = b;
    for (ll &i : arr)
        cin >> i;
    // sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {

        ans += min(a - 1, arr[i]);
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
