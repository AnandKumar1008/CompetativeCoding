#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    pair<int, int> a[n];
    bool no = false;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
        if (i > 0 && a[i].first >= a[0].first && a[i].second >= a[0].second)
        {
            no = 1;
        }
    }
    if (no)
    {
        cout << -1 << endl;
        return;
    }
    // sort()
    cout << a[0].first << endl;
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
