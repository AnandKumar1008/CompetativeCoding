#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (char &ch : s)
        if (ch == '+')
            x++;
        else
            y++;
    ll q;
    cin >> q;
    ll tot = x - y;
    while (q--)
    {
        ll p, q;
        cin >> p >> q;

        if (tot == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (p == q)
        {
            cout << "NO" << endl;
            continue;
        }
        ll val = (tot * q) % (q - p);

        ll res = (tot * q) / (q - p);
        if (val == 0 && res >= -y && res <= x)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
