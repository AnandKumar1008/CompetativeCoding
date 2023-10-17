#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver(int t)
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll space = n * m - 4;
    vector<int> vis(k + 1, 0);

    int a[k];
    // for (int &i : a)
    //     cin >> i;
    int last = k;
    int x;
    int j = k;
    bool no = false;
    // cout << k << " k" << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (x == j)
        {
            vis[j] = 1;
            // last--;
            while (vis[j])
            {
                j--;
                space++;
            }
            space--;

            continue;
        }
        space--;
        if (space < 0)
        {
            no = 1;
        }
        // break;
        vis[x] = 1;
    }
    if (no)
        cout << "TIDAK" << endl;
    else
        cout << (j == 0 ? "YA" : "TIDAK") << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solver(t);
    }
}
