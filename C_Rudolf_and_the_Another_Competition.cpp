#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solver()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector<pair<ll, ll>> scores(n);
    vector<int> arr(m);
    ll firstScore, penalty;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        ll sum = 0;
        int score = 0;
        ll total = 0;
        for (int i = 0; i < m; i++)
        {
            if (sum + arr[i] <= h)
            {
                score++;
                total += sum + arr[i];
                sum += arr[i];
            }
        }
        if (i == 0)
        {
            firstScore = score;
            penalty = total;
        }
        scores[i] = {score, total};
        // cout << score << " " << sum << endl;
    }
    sort(scores.begin(), scores.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (firstScore >= scores[i].first && penalty <= scores[i].second)
        {
            cout << i + 1 << endl;
            return;
        }
        // cout << scores[i].first << " " << scores[i].second << endl;
    }
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