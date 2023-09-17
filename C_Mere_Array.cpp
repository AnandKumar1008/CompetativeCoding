#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    int a[n];
    int mn = INT_MAX;
    for (int &i : a)
        cin >> i, mn = min(mn, i);
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % mn == 0)
        {
            res.push_back(a[i]);
            a[i] = -1;
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0, j = 0; i < n; i++)
    {
        if (a[i] == -1)
            a[i] = res[j++];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
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