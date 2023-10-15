#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll r, c;
    cin >> r >> c;
    if (r == 1 && c == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (c == 1)
    {
        for (int i = 2; i <= r + 1; i++)
            cout << i << endl;
        return;
    }
    if (r == 1)
    {
        for (int i = 2; i <= c + 1; i++)
            cout << i << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = r + 1; j <= r + c; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
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
