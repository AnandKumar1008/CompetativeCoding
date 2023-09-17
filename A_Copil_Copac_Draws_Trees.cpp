#include <bits/stdc++.h>
using namespace std;
const int NMAX = 2e5 + 5;
int dp[NMAX];
int id[NMAX];
vector<pair<int, int>> graph[NMAX];
void dfs(int u)
{
    for (auto it : graph[u])
    {
        if (dp[it.first] == 0)
        {
            dp[it.first] = dp[u] + (it.second <= id[u]);
            id[it.first] = it.second;
            dfs(it.first);
        }
    }
}

void solver()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = id[i] = 0, graph[i].clear();
    }
    id[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;

        graph[x].push_back({y, i});
        graph[y].push_back({x, i});
    }
    dp[1] = 1;
    dfs(1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
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