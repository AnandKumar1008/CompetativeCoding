#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a)
            cin >> i;
        vector<bool> pref_vis(1 << 8, 0);
        int cur_xor = 0;
        pref_vis[0] = 1;
        int ans = 0;
        for (int &i : a)
        {
            cur_xor ^= i;
            for (int j = 0; j <= 255; j++)
            {
                if (pref_vis[j])
                {

                    ans = max(ans, cur_xor ^ j);
                }
            }
            pref_vis[cur_xor] = 1;
        }
        cout << ans << endl;
    }
}