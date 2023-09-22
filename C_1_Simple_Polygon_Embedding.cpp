#include <bits/stdc++.h>

using namespace std;
#define ll long long
const double PI = 3.14159265358979323846;
void solver()
{
    ll n;
    cin >> n;
    // cout << M_PI << endl;
    double angle = PI / (2.0 * n);
    // cout << setprecision(8) << angle << endl;
    double val = tan(angle);
    // cout << val << setprecision(8) << endl;
    double ans = 1.0 / val;
    cout << setprecision(30) << ans << endl;
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
