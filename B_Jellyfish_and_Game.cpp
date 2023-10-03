#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, m, k;
    cin >> n >> m >> k;
    k--;
    ll a[n], b[m];
    for (ll &i : a)
        cin >> i;
    for (ll &i : b)
        cin >> i;
    int x = 0, y = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[x])
            x = i;
    }
    for (int i = 1; i < m; i++)
    {
        if (b[i] > b[y])
            y = i;
    }
    if (a[x] < b[y])
        swap(a[x], b[y]);
    if (k & 1)
    {
        x = 0, y = 0;
        for (int i = 1; i < n; i++)
            if (a[x] < a[i])
                x = i;
        for (int j = 1; j < m; j++)
            if (b[y] > b[j])
                y = j;
        if (a[x] > b[y])
            swap(a[x], b[y]);
    }
    ll sum = 0;
    for (ll &i : a)
        sum += i;
    cout << sum << endl;
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
