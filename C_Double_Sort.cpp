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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i].first;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            // int first=a[i].first

            for (int j = 1; j < n - i; j++)
            {
                if (a[j].first < a[j - 1].first)
                {
                    swap(a[j], a[j - 1]);
                    ans.push_back({j, j - 1});
                }
                else if (a[j].first == a[j - 1].first)
                {
                    if (a[j].second < a[j - 1].second)
                    {
                        swap(a[j], a[j - 1]);

                        ans.push_back({j, j - 1});
                    }
                }
            }
        }
        bool no = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first < a[i - 1].first || a[i].second < a[i - 1].second)
            {
                no = 1;
            }
        }
        if (no)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
            }
        }
    }
}