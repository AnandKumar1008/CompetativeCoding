#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;
    int a[n];
    ll sum = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(i);
        sum += a[i];
    }
    int prev = 0;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int p, q;
            cin >> p >> q;
            if (s.count(p - 1))
            {
                sum -= a[p - 1];
                sum += q;
                a[p - 1] = q;
            }
            else
            {
                sum -= prev;
                sum += q;
                a[p - 1] = q;
                s.insert(p - 1);
            }
        }
        else
        {
            int q;
            cin >> q;
            sum = 1ll * q * (n);
            prev = q;
            set<int> em;
            s.swap(em);
            // s.clear();
        }
        cout << sum << endl;
    }
}