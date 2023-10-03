#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{

    string s;
    cin >> s;
    int mn = 0, curr = 0;
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            curr++;
        else
            curr--;
        if (curr < mn)
        {
            mn = curr;
            ans += i + 1;
        }
    }
    cout << ans + s.size() << endl;
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
