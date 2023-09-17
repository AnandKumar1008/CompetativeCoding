#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &z : a)
            cin >> z;
        sort(a, a + n);
        int l = -1, r = 1e9;
        while (r - l > 1)
        {
            int m = (l + r) / 2;
            int i = 0;
            while (i + 1 < n && a[i + 1] - a[0] <= 2 * m)
            {
                i++;
            }
            int j = n - 1;
            while (j - 1 >= 0 && a[n - 1] - a[j - 1] <= 2 * m)
            {
                j--;
            }
            i++;
            j--;
            if (i > j || a[j] - a[i] <= 2 * m)
            {
                r = m;
            }
            else
                l = m;
        }
        cout << r << endl;
    }
}