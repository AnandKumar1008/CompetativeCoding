#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 1;
ll target;
ll n;
int a[N + 1], h[N + 1];
int length[N + 1];
int preSum[N + 1];
bool check(int m)
{
    // cout << n << " nm  " << m << endl;
    for (int i = 1; i <= n - m + 1; i++)
    {
        // cout << length[i] << " i " << endl;
        if (length[i] >= m)
        {
            ll sum = preSum[i + m - 1] - preSum[i - 1];
            // cout << sum << "sum" << endl;
            if (sum <= target)
                return true;
        }
    }
    return false;
}
void solver()
{

    cin >> n >> target;

    int mn = INT_MAX;
    preSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        preSum[i] = preSum[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    length[n] = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        if (h[i] % h[i + 1] == 0)
            length[i] = length[i + 1] + 1;
        else
            length[i] = 1;
    }

    int l = 1, r = n;
    while (l <= r)
    {
        int m = (l + r) >> 1;
        // cout << m << endl;
        if (check(m))
            l = m + 1;
        else
            r = m - 1;
    }

    cout << r << endl;
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
