#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
void solver()
{
    ll n, g, b;
    cin >> n >> g >> b;
    ll half = (n - 1) / 2 + 1;
    ll total = (half) / g * (b + g);
    total += (half % g == 0 ? -b : half % g);
    cout << max(n, total) << endl;
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
