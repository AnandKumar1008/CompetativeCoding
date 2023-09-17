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
        int n = s.size();
        int ans = 0;
        vector<bool> used(n, 0);
        for (int i = 1; i < n; i++)
        {
            bool use_it = false;
            if (s[i] == s[i - 1] && !used[i - 1])
            {
                use_it = 1;
            }
            if (i > 1 && s[i] == s[i - 2] && !used[i - 2])
            {
                use_it = 1;
            }
            used[i] = use_it;
            ans += used[i];
        }
        cout << ans << endl;
    }
}