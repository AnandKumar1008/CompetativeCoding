#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    vector<string> v(n);
    set<char> s1;
    set<string> s2;

    for (int i = 0; i < 10; i++)
    {
        s1.insert('0' + i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s1.erase(v[i][3]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s2.count(v[i]))
        {
            v[i][3] = *s1.begin();
            s1.erase(s1.begin());
            ans++;
        }

        s2.insert(v[i]);
    }
    cout << ans << endl;
    for (string &s : v)
        cout << s << endl;
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
