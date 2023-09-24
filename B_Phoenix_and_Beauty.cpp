#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    set<int> set;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        set.insert(x);
    }
    if (set.size() > k)
    {
        cout << -1 << endl;
        return;
    }
    int j = 1;
    while (set.size() < k)
    {
        set.insert(j++);
    }

    cout << n * k << endl;
    while (n--)
    {
        for (auto &i : set)
        {
            cout << i << " ";
        }
    }

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
