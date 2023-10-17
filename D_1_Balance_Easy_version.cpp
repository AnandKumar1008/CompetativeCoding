#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    set<ll> s;
    s.insert(0);
    map<ll, ll> mp;
    while (n--)
    {
        char ch;
        ll x;
        cin >> ch >> x;
        if (ch == '+')
            s.insert(x);
        else
        {
            ll j = 1;
            if (mp.count(x))
                j = mp[x];
            while (s.count(x * j))
            {
                j++;
            }
            cout << x * j << endl;
            mp[x] = j;
        }
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
