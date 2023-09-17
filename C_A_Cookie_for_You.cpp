#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b < c + d || min(a, b) < d)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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