#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[(i) % n] - a[(i + 1) % n]);
    }
    cout << ans << endl;
}