#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, c;
        cin >> n >> m;
        vector<long> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v[c] = i;
        }
        int j = 1, k;
        long long s = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            k = v[c];
            if (k < j)
                s = s + 1;
            else
            {
                s = s + 2 * (k - i) + 1;
                j = k;
            }
        }
        cout << s << endl;
    }
}