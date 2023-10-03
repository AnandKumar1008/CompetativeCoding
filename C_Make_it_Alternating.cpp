#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e5 + 5;
const ll mod = 998244353;
ll fact[nmax];
ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
void solver()
{

    string s;
    cin >> s;
    ll ans = 1, one = 0, zero = 0;
    ll res = 0;
    int n = s.size();
    vector<int> arr;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '0')
        {
            if (one)
                arr.push_back(one);
            one = 0;
            zero++;
        }
        else
        {

            if (zero)
                arr.push_back(zero);
            zero = 0;
            one++;
        }
    }
    int mx = max(zero, one);
    arr.push_back(mx);
    int m = arr.size();
    for (int i = 0; i < m; i++)
    {
        ans = (ans * arr[i]) % mod;
        res += arr[i] - 1;
    }
    cout << res << " " << (ans * fact[n - m]) % mod << endl;
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
