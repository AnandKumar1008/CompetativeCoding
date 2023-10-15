#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> dp;
void solver(vector<vector<int>> &a, int i, int j)
{
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    dp.resize(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int j = 0; j < 3; j++)
    {
        ans = max(ans, solver(a, 0, j));
    }
    cout << ans << endl;
}
