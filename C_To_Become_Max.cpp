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
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, a[i]);
        int val = a[i] + 1;
        int p = k;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] < val)
            {
                p -= val - a[j];
                if (p < 0)
                    break;
                res = max(res, val);
                val++;
            }
            else
                break;
        }
        if (i < 2)
            continue;
        p = k;
        int val2;
        if (a[i] >= a[i - 1] && a[i] >= a[i - 2] && a[i - 2] >= a[i - 1])
        {
            p = p - (a[i - 2] - a[i - 1]);
            val2 = a[i - 2];
        }
        else
            continue;
        // int val2=a[i];
        for (int j = i - 2; j >= 0; j--)
        {
            if (a[j] <= val2)
            {
                p -= val2 - a[j];
                if (p < 0)
                    break;
                res = max(res, val);
                val2++;
            }
            else
                break;
        }
    }
    cout << res << endl;
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