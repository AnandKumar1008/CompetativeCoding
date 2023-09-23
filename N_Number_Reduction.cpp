#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{

    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<vector<int>> pos(10);
    int n = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        pos[s[i] - '0'].push_back(i);
    }
    for (int i = 0; i < 10; i++)
    {
        reverse(pos[i].begin(), pos[i].end());
    }
    int len = n - k;
    int lst = 0;
    string ans;
    for (int i = 0; i < len; i++)
    {
        for (int j = (lst == 0); j < 10; j++)
        {
            while (!pos[j].empty() && pos[j].back() < lst)
            {
                pos[j].pop_back();
            }
            if (!pos[j].empty() && pos[j].back() - lst <= k)
            {
                ans += j + '0';
                k -= pos[j].back() - lst;
                lst = pos[j].back() + 1;
                break;
            }
        }
    }
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
