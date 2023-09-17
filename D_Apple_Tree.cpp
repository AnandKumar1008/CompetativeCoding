#include <bits/stdc++.h>
using namespace std;
int solver(int i, vector<vector<int>> &adj, vector<int> &count, vector<bool> &vis)
{
    vis[i] = 1;
    if ((i != 1) && adj[i].size() == 1)
        return count[i] = 1;
    for (auto &z : adj[i])
    {
        if (!vis[z])
        {
            count[i] += solver(z, adj, count, vis);
        }
    }
    return count[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        int x, y;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<int> count(n + 1, 0);
        vector<bool> vis(n + 1, 0);
        solver(1, adj, count, vis);
        int q;
        cin >> q;
        while (q--)
        {
            int m, n;
            cin >> m >> n;
            cout << 1ll * count[m] * count[n] << endl;
        }
    }
}