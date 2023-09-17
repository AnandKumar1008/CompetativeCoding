#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    int y = 0, no = 0;
    while (l <= r)
    {
        if (s[l] == s[r])
            y++;
        else
            no++;
        l++;
        r--;
    }
    // cout << y << "y" << endl;
    if (n % 2 == 0)
    {
        bool flag = 1;
        for (int i = 0; i <= n; i++)
        {
            if (i >= no && i <= no + 2 * y)
            {
                if (flag)
                    cout << 1;
                else
                    cout << "0";
                flag = !flag;
            }
            else
                cout << 0;
        }
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            if (i >= no && i <= no + 2 * y - 1)
                cout << 1;
            else
                cout << 0;
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}