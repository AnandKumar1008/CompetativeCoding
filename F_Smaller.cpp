#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    vector<ll> v1(26, 0), v2(26, 0);
    bool isOther2 = false, isOther1 = false;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        string c;
        cin >> a >> b >> c;
        if (a == 1 && !isOther2)
        {
            for (ll j = 0; j < c.size(); j++)
            {
                v1[c[j] - 'a'] += b;
                if (c[j] != 'a')
                    isOther1 = true;
            }
        }
        else if (!isOther2)
            for (ll j = 0; j < c.size(); j++)
            {
                v2[c[j] - 'a'] += b;
                if (c[j] != 'a')
                {
                    isOther2 = 1;
                    break;
                }
            }
        if (isOther2)
            cout << "YES" << endl;
        else if (isOther1)
            cout << "NO" << endl;
        else if (v1[0] < v2[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // cout << v1[0] << " here " << v2[0] << " " << isOther2 << " " << isOther1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}
