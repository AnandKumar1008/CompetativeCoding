#include <bits/stdc++.h>
using namespace std;
void makeChange(int n, string &a)
{
    int l = 0, r = n;
    while (l <= r)
    {
        a[l] = a[l] == '0' ? '1' : '0';
        if (l == r)
            break;
        a[r] = a[r] == '0' ? '1' : '0';
        swap(a[l], a[r]);
        l++;
        r--;
    }
    // cout << a << "here" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (a[n - i - 1] != b[i])
            {
            }
            else
            {
                if (a[n - i - 1] == a[0])
                {
                    makeChange(n - i - 1, a);
                    res.push_back(n - i);
                }
                else
                {
                    res.push_back(1);
                    makeChange(0, a);
                    res.push_back(n - i);
                    makeChange(n - i - 1, a);
                }
            }
            // cout << a << endl;
            // cout << b << endl;
        }
        res.push_back(n);
        cout << res.size() << " ";
        for (int &i : res)
            cout << i << " ";
        cout << endl;
    }
}