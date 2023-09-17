#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    ll n, W;
    cin >> n >> W;
    // pair<ll, ll> a[n];
    vector<pair<ll, ll>> a(n);
    // set<ll> set;
    ll x;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());
    pair<ll, ll> p = {(W - 1) / 2 + 1, 0};
    auto upper = lower_bound(a.begin(), a.end(), p);
    if (upper != a.end() && upper->first <= W)
    {
        cout << 1 << endl;
        // cout << "here" << endl;
        cout << upper->second << endl;
        return;
    }
    vector<int> res;
    ll sum = 0;
    bool ans = 0;
    res.push_back(a[0].second);
    for (int i = 1; i < n; i++)
    {
        sum = a[i - 1].first + a[i].first;
        a[i].first = sum;

        res.push_back(a[i].second);
        if (sum >= (W - 1) / 2 + 1 && sum <= W)
        {
            ans = 1;
            break;
        }
    }
    if (ans)
    {
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }
    cout << endl;
    // auto up=upper_bound(a,a+n,W/2);
}
int main()
{
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