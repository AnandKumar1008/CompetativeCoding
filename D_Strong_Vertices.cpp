#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int &i : a)
            cin >> i;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[i] = a[i] - x;
            mx = max(mx, b[i]);
        }
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == mx)
                res.push_back(i);
        }
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] + 1 << " ";
        }
        cout << endl;

        /* code */
    }
}