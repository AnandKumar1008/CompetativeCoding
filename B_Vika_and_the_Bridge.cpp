
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        vector<vector<int>> b(m + 1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x].push_back(i + 1);
        }
        int ans = INT_MAX;
        for (int i = 1; i <= m; i++)
        {
            int start = 0;
            int mx = 0;
            vector<int> arr;
            for (int j = 0; j < b[i].size(); j++)
            {
                arr.push_back(b[i][j] - start - 1);
                start = b[i][j];
            }
            // mx = max(mx, n - start);
            arr.push_back(n - start);
            int siz = arr.size();
            sort(arr.begin(), arr.end());
            if (siz >= 2)
                ans = min(ans, max(arr[siz - 2], arr[siz - 1] / 2));
            else
                ans = min(ans, arr.back() / 2);
        }
        cout << ans << endl;
    }
}