#include <bits/stdc++.h>
using namespace std;
#define ll long long
// at first go for the brute force approach
// brute force goinng for it you should be prepared of it
const int nmax = 2e5 + 2;
char a[nmax];
void solver()
{
    int n, k;
    cin >> n >> k;
    char ch;
    vector<int> lose;
    int c = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch, a[i] = ch;

        if (ch == 'L')
            c++;
        else if (c || i == 0)
        {
            ans++;
            lose.push_back(c), c = 0;
        }
        else
            ans += 2;
    }
    if (c == n)
    {
        int res = 2 * min(k, n) - 1;
        cout << max(res, 0) << endl;
        return;
    }
    lose.push_back(c);
    if (lose.size() >= 3)
        sort(lose.begin() + 1, lose.end() - 1);
    for (int i = 1; i < lose.size() - 1; i++)
    {
        if (k >= lose[i])
        {
            ans += 2 * (lose[i]) + 1;

            k -= lose[i];
        }
        else
        {
            ans += 2 * k;
            k = 0;
            break;
        }
    }

    ans += min(2 * (lose[0] + lose.back()), 2 * k);
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