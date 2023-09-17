#include <bits/stdc++.h>
using namespace std;
void solver()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    set<pair<int, int>> s;
    for (int i = 1; i <= m; i++)
    {
        s.insert({0, i});
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pair<int, int> p = *s.begin();
        s.erase(p);
        cout << p.second << " ";
        s.insert({p.first + x, p.second});
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}