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
        vector<int> c;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (!b[i])
                c.push_back(a[i]);
        }
        sort(c.begin(), c.end(), greater<>());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!b[i])
            {
                cout << c[j++] << " ";
            }
            else
            {
                cout << a[i] << " ";
            }
            /* code */
        }
        cout << endl;
    }
}