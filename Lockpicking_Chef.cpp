#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, m;
    cin >> n >> m;
    string s, s2;
    cin >> s >> s2;
    int ans = INT_MAX;
    for (int i = m - 1; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int a1 = s2[j] - '0';
            int a2 = s[i - m + 1 + j] - '0';

            sum += min(abs(s2[j] - s[i - m + 1 + j]), min(abs((10 - a2) + (a1)), abs((10 - a1) + a2)));
        }
        // cout << sum << "sum" << endl;
        ans = min(sum, ans);
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
