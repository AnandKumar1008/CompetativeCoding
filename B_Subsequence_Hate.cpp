#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n + 2), b(n + 2);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a[i + 1] = a[i] + 1;
        }
        else
            a[i + 1] = a[i];
        if (s[n - 1 - i] == '0')
            b[n - i] = b[n - i + 1] + 1;
        else
            b[n - i] = b[n - i + 1];
    }

    int ans = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '0')
        {
            ans = min(ans, a[i] + b[i + 1]);
        }
        else
            ans = min(ans, i - a[i] + n - i - b[i + 1]);
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
