#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int &it : a)
        cin >> it;
    int b[n];
    b[0] = b[1] = b[2] = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i - 2] >= a[i - 1] && a[i - 1] >= a[i])
            b[i] = 1 + b[i - 1];
        else
            b[i] = b[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        r--;
        l--;
        int ans = 1;

        cout << max((r - l + 1 - (b[r] - b[(l + 1) > r ? r : l + 1])), ans) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
