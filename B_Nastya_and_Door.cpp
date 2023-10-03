#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool peak(int i, vector<int> &a, int l, int r)
{
    if (i == l || i == r)
        return 0;
    return a[i] > a[i - 1] && a[i] > a[i + 1];
}
void solver()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int now = 0, ans = 0, l = 0, r = 0;
    for (int i = 1; i + 1 < k; i++)
    {
        if (peak(i, a, 0, k - 1))
            now++;
    }
    ans = now + 1;
    for (int i = k; i < n; i++)
    {
        if (peak(i - k + 1, a, i - k, i - 1))
            now--;
        if (peak(i - 1, a, i - k + 1, i))
            now++;
        if (now + 1 > ans)
        {
            ans = now + 1;
            l = i - k + 1;
            r = i;
        }
    }
    cout << ans << " " << l + 1 << endl;
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
