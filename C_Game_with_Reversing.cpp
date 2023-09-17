#include <bits/stdc++.h>
using namespace std;
int diff(string &s1, string &s2)
{
    int n = s1.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            c++;
    }
    return c;
}
void reverse(string &s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int ans;
        int v1 = diff(s1, s2);
        if (v1 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (v1 % 2 == 0)
        {
            ans = 2 * v1;
        }
        else
        {
            ans = 2 * v1 - 1;
        }

        reverse(s2);
        v1 = diff(s1, s2);
        if (v1 % 2 == 0)
        {
            ans = min(ans, max(2, 2 * v1 - 1));
        }
        else
        {
            ans = min(ans, max(2, 2 * v1));
        }
        // ans = min(ans, max(2, 2 * v1));
        cout << ans << endl;
    }
}