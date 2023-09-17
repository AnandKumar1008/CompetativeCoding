#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 1;
    // bool f1 = 1, f2 = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1' && s[i - 1] == '0')
        {
            ans += i + 1;
        }
        else if (s[i] == '0' && s[i - 1] == '1')
            ans += i + 1;

        else
            ans += 1;
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