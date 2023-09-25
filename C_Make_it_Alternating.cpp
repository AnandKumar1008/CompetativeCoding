#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e5 + 5;
const ll mod = 998244353;
ll fact[nmax];

void solver()
{

    string s;
    cin >> s;
    ll ans = 1, one = 0, zero = 0;
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '0')
        {
            if (one > 1)
            {
                ans = (ans * fact[one]) % mod;
                res += (one - 1);
            }
            one = 0;
            zero++;
        }
        else
        {

            if (zero > 1)
            {
                ans = (ans * fact[zero]) % mod;
                res += (zero - 1);
            }
            zero = 0;

            one++;
        }
    }
    int mx = max(zero, one);
    if (mx > 1)
    {
        ans = (ans * fact[mx]) % mod;
        res += (mx - 1);
    }
    cout << res << " " << ans << endl;
}
int main()
{
    fact[0] = 1;
    for (int i = 1; i < nmax; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
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
