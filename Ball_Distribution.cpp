#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    long long n, m;
    cin >> n >> m;
    int a[m];
    long long sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    // sort(a, a + m, greater<>());
    if (sum > n * (m - 1))
    {
        if (sum == n * m)
        {
            cout << n << endl;
        }
        else
            cout << sum % n << endl;
    }
    else
    {
        cout << 0 << endl;
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