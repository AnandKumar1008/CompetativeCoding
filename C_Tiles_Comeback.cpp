#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
        cin >> i;
    int prev = a[0], p = 0, q = 0;
    int last = a[n - 1];
    int idx1 = 0, idx2 = n - 1;
    bool first = 0, second = 0;
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (a[i] == prev)
        {
            p++;
            if (p == k)
            {
                idx1 = i;
                first = 1;
            }
        }
        if (a[j] == last)
        {
            q++;
            if (q == k)
            {
                idx2 = j;
                second = 1;
            }
        }
    }
    int c = 0;
    if (a[0] == a[n - 1])
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                c++;
        }
        if (c >= k)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (first && second && idx1 < idx2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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