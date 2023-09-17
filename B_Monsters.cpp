#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solver()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x = x % k;
        if (x == 0)
        {
            cout << i + 1 << " ";
            continue;
        }

        a.push_back({x, i + 1});
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++)
        cout << a[i].second << " ";
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