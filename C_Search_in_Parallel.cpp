#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 2e5 + 1;
int n, s1, s2, k;
pair<int, int> a[nmax];
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first > b.first;
}
void solver()
{
    cin >> n >> s1 >> s2;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        a[i] = {k, i};
    }
    sort(a + 1, a + n + 1, cmp);
    vector<int> res1, res2;
    for (int i = 1; i <= n; i++)
    {
        if (1ll * a[i].first * s1 * (res1.size() + 1) <= 1ll * a[i].first * s2 * (res2.size() + 1))
        {
            res1.push_back(a[i].second);
        }
        else
            res2.push_back(a[i].second);
    }
    cout << res1.size() << " ";
    for (int i = 0; i < res1.size(); i++)
    {
        cout << res1[i] << " ";
    }
    cout << endl;
    cout << res2.size() << " ";
    for (int &it : res2)
        cout << it << " ";
    cout << endl;
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
