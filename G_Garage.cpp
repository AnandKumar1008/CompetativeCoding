#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    n--;
    ll val = (n / 3) * 2;
    if (n == 0)
        cout << 3 << endl;
    else
    {
        ll res = 5 + (val - 1) * 2 + (n % 3 == 0 ? 1 : n % 3 == 1 ? 2
                                                                  : 4);
        cout << res << endl;
    }
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
