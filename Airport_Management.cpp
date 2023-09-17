#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    // vector<int>a(n)
    unordered_map<int, int> mp;
    int x, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // mp[x]++;
        ans = max(ans, ++mp[x]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans = max(ans, ++mp[x]);
    }
    cout << ans << endl;
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