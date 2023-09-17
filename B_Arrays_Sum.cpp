#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    bool allEqual = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
        if (i > 0 && a[i] != a[i - 1])
            allEqual = false;
    }
    if (allEqual)
    {
        cout << 1 << endl;
        return;
    }
    if (k == 1)
    {
        cout << -1 << endl;
        return;
    }
    int b[100][100];
    int z = (a[0] != 0);
    int p = 0;
    for (int i = 0; i < n;)
    {
        while (i < n && a[i] == 0)
            i++;
        if (i >= n)
            break;
        int val = a[i];
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                a[j] -= val;
                b[p][j] = val;
            }
            else
                b[p][j] = 0;
        }
        p++;
    }
    // cout << "start" << endl;
    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "end" << p << endl;
    p -= z;
    cout << ((p - 1) / (k - 1)) + 1 << endl;
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