#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x]++;
        mp[y]--;
    }
    int ans = -1;
    int sum = 0;
    int idx = 0;
    for (auto &it : mp)
    {
        sum += it.second;
        if (sum > ans)
        {
            ans = sum;
            idx = it.first;
        }
    }
    cout << idx << " " << ans << endl;
}