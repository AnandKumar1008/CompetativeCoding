#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll power(ll x, ll y)
{
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (ans * x) % mod;
        }
        x = (x * x) % mod;
        y = y >> 1;
    }
    return ans;
}
int main()
{
    map<string, int> mp;
    mp["rama"] = 1;
    cout << mp.count("ram");
}