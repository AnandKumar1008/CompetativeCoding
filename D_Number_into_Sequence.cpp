#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = ans * x;
        }
        x = x * x;
        y = y >> 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // vector<int> res;
        unordered_map<int, int> mp;
        ll mx = 1;
        long long p, n;
        cin >> n;
        p = n;
        ll ans = 0;
        for (long long i = 2; i * i <= p; i++)
        {
            while (n % i == 0)
            {
                n = n / i;
                int val = ++mp[i];
                if (val > mx)
                {
                    mx = val;
                    ans = i;
                }
            }
        }
        cout << mx << endl;
        if (ans == 0)
        {
            cout << p << endl;
        }
        else
        {
            for (int i = 1; i < mx; i++)
            {
                cout << ans << " ";
            }
            mx--;
            cout << p / (power(ans, mx)) << endl;
        }
    }
}