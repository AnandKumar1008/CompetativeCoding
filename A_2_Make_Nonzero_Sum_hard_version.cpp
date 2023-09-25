#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 2e5 + 1;
ll n, sum;
int a[nmax];
void checker(vector<pair<int, int>> &res, int l, int i)
{

    int len = i - l + 1;

    if (sum == 0)
    {
        res.push_back({l, i});
    }
    else if (len % 2 == 0)
    {
        res.push_back({l, i - 1});
        res.push_back({i, i});
    }
    else if (len % 2 == 1 && a[l] != 0)
    {
        res.push_back({l, l});
        res.push_back({l + 1, i});
    }
}
void solver()
{
    cin >> n;
    int trace = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
            trace++;
    }
    if (trace % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    int c = 0;
    sum = 0;
    // if (trace != 0)
    vector<pair<int, int>> res;
    int l = 0;
    bool reverse = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            c++;
        sum += (reverse ? -a[i] : a[i]);
        if (c == 2)
        {
            checker(res, l, i);
            int len = i - l + 1;

            if (sum != 0 && len % 2 == 1 && a[l] == 0)
            {
                int j = l;
                int p = l;
                while (a[j] == 0)
                    j++;
                res.push_back({p, j - 1});
                checker(res, j, i);
            }
            sum = 0;
            c = 0;
            reverse = false;
            l = i + 1;
            continue;
        }
        reverse = !reverse;
    }
    if (l < n)
        checker(res, l, n - 1);
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first + 1 << " " << res[i].second + 1 << endl;
    }
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
