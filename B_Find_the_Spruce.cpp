#include <bits/stdc++.h>
using namespace std;
int a[510][510];

// method 1 got for the brute force approach and then we will go for optimised

void solver()
{
    int m, n;
    cin >> m >> n;
    // vector<vector<int>> a(m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch;
            cin >> ch;
            a[i][j] = a[i][j - 1] + (ch == '*');
            // cout << a[i][j];
        }
        // cout << endl;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; i + k <= m && j + k <= n && j - k; k++)
            {
                if (a[i + k][j + k] - a[i + k][j - k - 1] == 2 * k + 1)
                    ans++;
                else
                    break;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solver();
    }
    return 0;
}