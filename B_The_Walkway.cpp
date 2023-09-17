#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 1e5 + 1;
int a[nmax];
void solver()
{
    int n, m, d;
    cin >> n >> m >> d;
    // int a[m+2];
    ll ans = 0;
    int k = 0;
    a[k++] = 1 - d;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        a[k++] = x;
    }
    a[k++] = n + 1;
    for (int i = 1; i < k; i++)
    {
        ans += (a[i] - a[i - 1] - 1) / d + 1;
    }
    ll mn = ans;
    for (int i = 1; i < k - 1; i++)
    {
        mn = min(ans - (a[i] - a[i - 1] - 1) / d - (a[i + 1] - a[i] - 1) / d + (a[i + 1] - a[i - 1] - 1) / d - 1, mn);
    }
    int c = 0;

    for (int i = 1; i < k - 1; i++)
    {
        if (mn == (ans - (a[i] - a[i - 1] - 1) / d - (a[i + 1] - a[i] - 1) / d + (a[i + 1] - a[i - 1] - 1) / d - 1))
            c++;
    }
    cout << mn - 1 << " " << c << endl;
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