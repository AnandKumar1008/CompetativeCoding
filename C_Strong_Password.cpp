#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int m;
        cin >> m;
        int j = 0;
        int n = s.size();
        string l, r;
        cin >> l >> r;
        int mxn = 0, mx = 0;
        for (int i = 0; i < m; i++)
        {
            int start = l[i] - '0';
            int end = r[i] - '0';
            mxn = mx;
            for (int c = start; c <= end; c++)
            {
                j = mx;
                while (j < n && s[j] - '0' != c)
                    j++;
                mxn = max(mxn, j);
            }
            mx = mxn + 1;
        }
        if (mx > n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}