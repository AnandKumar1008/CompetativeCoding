#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll ans = 0, sum = 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    for (int i = n - 1, j = 0; j < n; j++, i--)
    {
        ans = max(ans, sum - a[j][i]);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;

    solver();
}
