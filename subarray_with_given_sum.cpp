#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    int a[n];
    int target;
    cin >> target;
    for (int &i : a)
        cin >> i;
    int curr = 0;
    unordered_map<int, int> mp;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (curr == target)
            ans++;
        if (mp.find(curr - target) != mp.end())
            ans += mp[curr - target];
        mp[curr]++;
        curr += a[i];
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;

    // {
    solver();
    // }
}