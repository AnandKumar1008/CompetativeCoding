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
        int a[n];
        for (int &i : a)
            cin >> i;
        vector<int> res;
        res.push_back(a[0]);
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
                res.push_back(a[i]);
        }
        res.push_back(a[n - 1]);
        cout << res.size() << endl;
        for (int &i : res)
            cout << i << " ";
        cout << endl;
    }
}