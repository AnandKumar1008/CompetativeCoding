#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll sum = 0;
        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }
        bool check = false;
        if (a[0] > a[1])
        {
            sum += a[0];
            check = 1;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                sum += a[i];
                check = 1;
            }
            else if (check && a[i] < a[i - 1] && a[i] < a[i + 1])
                sum -= a[i];
        }
        if (a[n - 1] > a[n - 2])
            sum += a[n - 1];
        cout << sum << endl;
    }
}