#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        double b, h;
        cin >> n >> b >> h;
        int a[n];
        double ans = 0;
        for (int &z : a)
            cin >> z;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j + 1] >= a[j] + h)
            {
                ans += 0.5 * b * h;
            }
            else
            {
                int h1 = a[j] + h - a[j + 1];
                double b1 = 1.0 * h1 / h * b;
                ans += 0.5 * b * h;
                ans += -0.5 * b1 * h1;
            }
        }
        ans += 0.5 * b * h;
        cout << setprecision(10) << ans << endl;
    }
}