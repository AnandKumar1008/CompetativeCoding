#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    a[0] = 1;
    for (int i = 1; i <= n; i++)
        a[i] = a[i - 1] * i;
    ll ans = a[n] / (a[n / 2] * a[n / 2]);
    ans = ans * a[n / 2 - 1] * a[n / 2 - 1];
    ans = ans / 2;
    cout << ans << endl;
}