#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, xr = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i, xr = xr ^ i, sum += i;
    cout << 3 << endl;
    cout << 0 << " " << xr << " " << (sum + xr) << endl;
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
