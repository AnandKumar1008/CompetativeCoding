#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    pair<int, int> p[3];
    for (auto &it : p)
    {
        int x, y;
        cin >> x >> y;
        it = {x, y};
    }
    int x, y;
    cin >> x >> y;
    pair<int, int> center = {p[0].first == p[1].first ? p[0].first : p[2].first, p[0].second == p[1].second ? p[0].second : p[2].second};
    auto [a, b] = center;
    if ((a == 1 || a == n) && (b == 1 || b == n))
    {
        cout << (x == a || y == b ? "YES\n" : "NO\n");
    }
    else if ((a + b) % 2 == (x + y) % 2)
    {
        cout << (a % 2 == x % 2 ? "YES\n" : "NO\n");
    }
    else
        cout << "YES\n";
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
