#include <bits/stdc++.h>
using namespace std;
void solver()
{
    int n;
    cin >> n;
    pair<long long, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a, a + n);
    // long long sum = a[0];
    long long sum[n];
    sum[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        // a[i].first += a[i - 1].first;
        sum[i] = sum[i - 1] + a[i].first;
    }
    set<int> ans;
    ans.insert(a[n - 1].second);
    for (int i = n - 2; i >= 0; i--)
    {
        if (sum[i] >= a[i + 1].first)
        {
            ans.insert(a[i].second);
        }
        else
            break;
    }
    cout << ans.size() << endl;
    for (const int &it : ans)
        cout << it + 1 << " ";
    cout << endl;
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