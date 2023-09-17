#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
const long long nMAX = 2e5 + 2;
long long fact[nMAX];
void factorial()
{
    fact[0] = 1;
    fact[1] = 1;
    for (long long j = 1; j < nMAX; j++)
    {
        fact[j] = (1ll * fact[j - 1] * j) % mod;
    }
}
int main()
{
    factorial();
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long x = INT_MAX;
        for (long long &i : a)
            cin >> i, x = x & i;
        long long c = 0;
        for (long long &it : a)
            if (it == x)
                c++;

        long long ans = (1ll * c * (c - 1)) % mod;
        ans = (1ll * ans * fact[n - 2]) % mod;
        cout << ans << endl;
    }
}