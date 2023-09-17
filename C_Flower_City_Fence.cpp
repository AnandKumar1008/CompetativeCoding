#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solver()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    if (a[0] != n)
        return false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            int diff = a[i - 1] - a[i];
            int prev = i;
            if (i + diff > n)
                return false;
            for (int k = i; k < i + diff; k++)
            {
                if (a[i] != a[prev])
                    return false;
                prev = k;
            }
        }
    }
    return true;
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