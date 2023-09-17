#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, g;
        cin >> n >> k >> g;
        ll stolen = min((g - 1) / 2 * n, k * g);
        ll rest = (k * g - stolen) % g;
        if (rest > 0)
        {
            stolen -= (g - 1) / 2;
            ll last = ((g - 1) / 2 + rest) % g;
            if (last * 2 < g)
            {
                stolen += last;
            }
            else
                stolen -= g - last;
        }
        cout << stolen << endl;
    }
}