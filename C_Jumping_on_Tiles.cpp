#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cost = abs(s[0] - s.back());
        vector<pair<int, int>> v;
        if (s[0] > s.back())
        {
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i] <= s[0] && s[i] >= s.back())
                {
                    v.push_back({s[i], i + 1});
                }
            }
            sort(v.begin(), v.end(), greater<>());
            cout << cost << " " << v.size() + 2 << endl;
            cout << 1 << " ";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].second << " ";
            }
            cout << s.size() << endl;
        }
        else
        {
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i] >= s[0] && s[i] <= s.back())
                {
                    v.push_back({s[i], i + 1});
                }
            }
            sort(v.begin(), v.end());
            cout << cost << " " << v.size() + 2 << endl;
            cout << 1 << " ";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].second << " ";
            }
            cout << s.size() << endl;
        }
    }
}