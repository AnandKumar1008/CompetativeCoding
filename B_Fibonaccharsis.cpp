#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k >= 30)
        {
            cout << 0 << endl;
            continue;
        }
        ll a = 0, b = 1, c;
        for (int i = 3; i <= k; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((n - i * a) % b == 0)
            {
                ll val = (n - i * a) / b;
                if (val >= i)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}