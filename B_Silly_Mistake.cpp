#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    set<int> s;
    vector<int> ans(0);
    long long w = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        w += a[i];
        if (a[i] < 0 && !s.count(-1 * a[i]))
        {
            cout << -1;
            return 0;
        }
        if (s.count(a[i]))
        {
            cout << -1;
            return 0;
        }
        s.insert(a[i]);
        if (!w)
        {
            ans.push_back(s.size());
            s.clear();
            w = 0;
        }
    }
    if (w)
    {
        cout << -1;
        return 0;
    }
    cout << ans.size() << endl;
    for (int t : ans)
        cout << t << " ";
    return 0;
}