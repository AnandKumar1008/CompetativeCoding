#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    int a[n];
    int ans = 0;
    int add = (m - 1) * k;
    for (int &z : a)
    {
        cin >> z;
        int val = abs(z - h);
        if (val != 0 && val <= add && val % k == 0)
        {
            ans++;
            // cout << val << "here" << h << endl;
        }
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