#include <bits/stdc++.h>
using namespace std;
int n;
int num;
void solve(vector<vector<int>> &arr, int i, int j)
{
    if (i < 1 || j < 1 || j > n || i > n || num == 0)
        return;
    if (j - 1 >= 1 && arr[i][j - 1] == 0)
    {
        num -= 1;
        arr[i][j - 1] = arr[i][j];
        solve(arr, i, j - 1);
    }
    else if (i + 1 <= n && arr[i + 1][j] == 0)
    {
        arr[i + 1][j] = arr[i][j];
        num -= 1;
        solve(arr, i + 1, j);
    }
}
int main()
{
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {

                int x;
                cin >> x;
                a[i][j] = x;
                num = x - 1;
                solve(a, i, j);
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}