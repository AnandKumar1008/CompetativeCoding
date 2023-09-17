#include <bits/stdc++.h>
using namespace std;
void solver()
{
    int n;
    cin >> n;
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            sum += abs(a[i] - a[i - 1]);
    }
    long long ans = sum;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans = min(ans, sum - abs(a[1] - a[0]));
        else if (i == n - 1)
        {
            ans = min(ans, sum - abs(a[n - 2] - a[n - 1]));
        }
        else
        {
            ans = min(ans, sum - abs(a[i + 1] - a[i]) - abs(a[i - 1] - a[i]) + abs(a[i + 1] - a[i - 1]));
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}