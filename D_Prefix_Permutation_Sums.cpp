#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solver()
{
    ll n;
    cin >> n;
    ll a[n - 1];
    for (ll &i : a)
        cin >> i;
    if (a[n - 2] > n * (n + 1) / 2)
    {
        return false;
    }

    int store = -1;
    set<int> set;
    if (a[0] <= n)
        set.insert(a[0]);
    else
        store = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (set.count(a[i] - a[i - 1]) || a[i] - a[i - 1] > n)
        {
            if (store >= 0)
                return false;
            store = a[i] - a[i - 1];
        }
        else
            set.insert(a[i] - a[i - 1]);
    }
    if (a[n - 2] != (n * (n + 1) / 2))
    {
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!set.count(i))
            {
                c++;
            }
        }
        if (c == 1)
            return true;
        else
            return false;
    }
    if (store < 0)
        return false;
    for (int i = 1; i <= n; i++)
    {
        if (!set.count(i) && !set.count(store - i))
            return true;
    }
    return false;
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

        if (solver())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}