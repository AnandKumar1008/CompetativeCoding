#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int ans = 0;
void solver(int i, int a[], ll sum, int size)
{
    ll tot = 0;
    if (i == n)
    {
        ans = size;
        return;
    }
    for (int j = i; j < n; j++)
    {
        tot += a[j];
        if (tot == sum)
        {
            solver(j + 1, a, sum, max(size, j - i + 1));
        }
        if (tot > sum)
            return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        int res = n;
        for (int i = 0; i < n; i++)
        {
            ans = INT_MAX;
            sum += a[i];
            solver(i + 1, a, sum, i + 1);
            res = min(res, ans);
        }
        cout << res << endl;
    }
}