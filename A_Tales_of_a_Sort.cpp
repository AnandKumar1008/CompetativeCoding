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
    int mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
            mx = max(mx, a[i]);
    }
    cout << mx << endl;
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