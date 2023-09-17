#include <bits/stdc++.h>
using namespace std;
void solver()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<>());
    int b[m];
    for (int &z : b)
        cin >> z;
    long long ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < m && b[j] < b[a[i] - 1])
            ans += b[j++];
        else
        {
            ans += b[a[i] - 1];
        }
    }
    cout << ans << endl;
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