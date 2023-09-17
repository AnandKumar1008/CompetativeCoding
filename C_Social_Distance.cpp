#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        int ans = 0;
        vector<int> arr;
        if (s[0] == '1')
            arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c++;
            else
            {
                if (c != 0)
                    arr.push_back(c);
                c = 0;
            }
        }
        if (c > 0)
            ans += (c / (k + 1));

        for (int i = 0; i < arr.size(); i++)
        {
            if (i == 0)
                ans += arr[0] / (k + 1);
            else
                ans += (arr[i] - k) / (k + 1);
        }
        if (c == n)
        {
            cout << (n + k) / (k + 1) << endl;
        }
        else
            cout << ans << endl;
    }
}