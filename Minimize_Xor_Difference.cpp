#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int a, b;
    cin >> a >> b;
    // int mx = (a, b);
    int ans = 0;
    int idx = 0;
    int mx = max(a, b);
    int mn = min(a, b);
    string bi = bitset<sizeof(int) * 8>(mx).to_string();
    string ba = bitset<sizeof(int) * 8>(mn).to_string();
    // cout << bi << endl;
    // cout << ba << endl;
    ;
    // int mn = min(a, b);
    bool flag = false;
    for (int i = 0; i < 32; i++)
    {
        // cout << i << endl;
        if (flag)
        {
            if (ba[i] != bi[i] && (ba[i] == '0'))
                ans += (1 << (31 - i));
        }
        // cout << ba[i] << endl;
        if ((ba[i] != bi[i]))
        {
            flag = true;
            // cout << flag << ba[i] << bi[i] << endl;
        }
    }
    // cout << bi.size() << endl;
    cout << ans << endl;
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
        solver();
    }
}
