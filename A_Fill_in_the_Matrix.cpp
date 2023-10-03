#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, m;
    cin >> n >> m;
    int a[n][m];
    int b[n];
    if (m == 1)
    {
        cout << 0 << endl;
    }
    else
        cout << max(min(m, n + 1), 2ll) << endl;
    for (int i = 0; i < min(n, m - 1); i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << (i + j + 1) % m << " ";
        }
        cout << endl;
    }
    for (int i = m - 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << (j + 1) % m << " ";
        }
        cout << endl;
    }
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
