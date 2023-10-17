#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll negProdSubArr(ll arr[], ll n)
{
    ll positive = 1, negative = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            arr[i] = 1;
        else
            arr[i] = -1;
        if (i > 0)
            arr[i] *= arr[i - 1];
        if (arr[i] == 1)
            positive++;
        else
            negative++;
    }

    return (positive * negative);
}
void solver()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll &i : a)
        cin >> i;

    ll tot = negProdSubArr(a, n);
    cout << tot << " " << (n * (n + 1) / 2) - tot << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
