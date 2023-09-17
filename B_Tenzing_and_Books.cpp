#include <bits/stdc++.h>
using namespace std;
bool checker(int a, int x)
{
    for (int i = 0; i <= 30; i++)
    {
        if ((x & (1 << i)) == 0 && ((a & (1 << i)) == (1 << i)))
            return false;
        if (((a & (1 << i)) == (1 << i)) && (x & (1 << i)) == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<vector<int>> a(3, vector<int>(n));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int sum = 0;
        bool ans = 0;
        if (sum == x)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (checker(a[i][j] | sum, x))
                {
                    sum = sum | a[i][j];
                }
                else
                    break;
                if (sum == x)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans)
                break;
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