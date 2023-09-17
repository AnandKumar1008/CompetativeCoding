#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    int mn = INT_MAX;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        if (i == 0)
        {
            if (a[0] > mn)
            {
                cout << "NO" << endl;
                return;
            }
            break;
        }
        int mx1 = max(a[i], a[i - 1]);
        int mn1 = min(a[i], a[i - 1]);
        if (mx1 > mn)
        {
            cout << "NO" << endl;
            return;
        }
        mn = mn1;
    }
    cout << "YES" << endl;
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