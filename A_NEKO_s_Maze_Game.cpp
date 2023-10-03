#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<bool>> a(2, vector<bool>(n, 0));
    int one[3][2] = {{1, 1}, {1, -1}, {1, 0}};
    int two[3][2] = {{-1, 0}, {-1, 1}, {-1, -1}};

    int diagonal = 0;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        a[l][r] = !a[l][r];
        if (l == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                int x = l + one[i][0], y = r + one[i][1];
                if (y < 0 || y >= n)
                    continue;
                if (a[x][y])
                    diagonal += (a[l][r] ? 1 : -1);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                int x = l + two[i][0], y = r + two[i][1];
                if (y < 0 || y >= n)
                    continue;
                if (a[x][y])
                    diagonal += (a[l][r] ? 1 : -1);
            }
        }
        cout << (diagonal ? "No" : "Yes") << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
