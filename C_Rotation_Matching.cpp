#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    pair<int, int> b[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = {x, i};
    }
    sort(a, a + n);
    sort(b, b + n);
    map<int, int> mp;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int diff = (a[i].second - b[i].second + n) % n;
        ans = max(ans, ++mp[diff]);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solver();
}
