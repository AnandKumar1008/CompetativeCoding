#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr)
{
    int n = arr.size() - 1, m = arr[0].size() - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void solver1(int n, int m, vector<vector<int>> &arr)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            arr[i][j] = k++;
        }
    }
}
void solver2(int n, int m, vector<vector<int>> &arr)
{
    int k = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[j][i] = k++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n + 1, vector<int>(m + 1));
        int k = 1;
        if (n % 2 == 0)
        {
            solver2(n, m, arr);
            print(arr);
            continue;
        }
        if (m % 2 == 0)
        {
            solver1(n, m, arr);
            print(arr);
            continue;
        }
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] = k++;
            }
        }
        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] = k++;
            }
        }
        print(arr);
    }
}