#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = n - 1, t = 0, b = n - 1;
        int j = 0;
        int ans = 0;
        while (l < r)
        {
            vector<pair<int, int>> a(r - l);
            j = 0;
            for (int i = l; i < r; i++)
            {
                if (v[t][i] == '0')
                    a[j].first++;
                else
                    a[j].second++;
                j++;
            }
            j = 0;
            for (int i = t; i < b; i++)
            {
                if (v[i][r] == '0')
                    a[j].first++;
                else
                    a[j].second++;
                j++;
            }
            j = 0;
            for (int i = r; i > l; i--)
            {
                if (v[b][i] == '0')
                    a[j].first++;
                else
                    a[j].second++;
                j++;
            }
            j = 0;
            for (int i = b; i > t; i--)
            {
                if (v[i][l] == '0')
                    a[j].first++;
                else
                    a[j].second++;
                j++;
            }
            for (int i = 0; i < r - l; i++)
            {
                ans += min(a[i].first, a[i].second);
            }
            l++;
            r--;
            b--;
            t++;
        }
        k
                cout
            << ans << endl;
    }
}