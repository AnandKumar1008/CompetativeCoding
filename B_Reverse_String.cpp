#include <bits/stdc++.h>
using namespace std;

// map<string, bool> mp;
bool isPossible(string &s, string &t, bool flag, int i, int j)
{
    if (j == t.size() - 1)
        return true;
    // string key = to_string(flag) + " " + to_string(i) + " " + to_string(j);
    // if (mp.find(key) != mp.end())
    //     return mp[key];

    bool ans = false;
    if (flag && (i + 1 < s.size()) && t[j + 1] == s[i + 1])
    {
        ans = ans || isPossible(s, t, true, i + 1, j + 1);
    }
    if (i - 1 >= 0 && t[j + 1] == s[i - 1])
        ans = ans || isPossible(s, t, false, i - 1, j + 1);
    return ans;
}
// going for the worst case
// check for another method such that it may be efficient

bool solver()
{
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[0] && isPossible(s, t, 1, i, 0))
            return true;
    }
    return false;
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        if (solver())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}