#include <bits/stdc++.h>
using namespace std;
// Brute Force Approach
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, vector<ll>> mp;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[i] = x;
        }
        long long sum = 0;
        ll mxSize = 0;
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            sum += x;
            mp[arr[j]].push_back(x);
            ll sz = mp[arr[j]].size();
            mxSize = max(mxSize, sz);
        }
        long long ans[n] = {0};
        for (auto &m : mp)
        {
            auto &second = m.second;
            sort(second.begin(), second.end(), greater<>());
            for (ll i = 1; i < second.size(); i++)
            {
                second[i] += second[i - 1];
            }
            for (int k = 1; k <= second.size(); k++)
            {
                ans[k - 1] += second[second.size() / k * k - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}