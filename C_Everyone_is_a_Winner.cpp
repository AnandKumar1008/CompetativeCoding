#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    set<int> set;
    for (int i = 1; i * i <= n; i++)
    {
        set.insert(i);
        set.insert(n / i);
    }
    cout << set.size() + 1 << endl;
    cout << 0 << " ";
    for (auto &i : set)
        cout << i << " ";
    cout << endl;
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
