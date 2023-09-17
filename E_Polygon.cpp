#include <bits/stdc++.h>
using namespace std;

bool solver()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }
    bool ans = 1;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            if (a[i][j] && !a[i][j + 1] && !a[i + 1][j])
            {
                ans = false;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solver())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}