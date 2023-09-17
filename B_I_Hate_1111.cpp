
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// ll a[10] = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
bool solver(int n, int j)
{
    for (int i = 0; i < 8; i++)
    {
        // solver(n - a[i]);
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ans = 0;
        if (n >= 1100)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            for (int i = 0; i <= 10; i++)
            {
                ll val = n - i * 111;
                if (val < 0)
                    break;
                if (val % 11 == 0)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}