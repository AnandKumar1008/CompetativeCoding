#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string mn = s;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        string str = s.substr(i);
        string s2 = s.substr(0, i);
        if ((n - i) % 2 == 0)
        {
            str += s2;
        }
        else
        {
            reverse(s2.begin(), s2.end());
            str += s2;
        }
        if (str < mn)
        {
            mn = str;
            ans = i;
        }
    }
    cout << mn << endl;
    cout << ans + 1 << endl;
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
