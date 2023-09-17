#include <bits/stdc++.h>
using namespace std;
bool check(int i, int j, int val, int grid[4][4])
{
    for (int k = 0; k < 4; k++)
    {
        if (grid[k][j] == val)
            return false;
        if (grid[i][k] == val)
            return false;
    }
    int a = i / 2;
    int b = j / 2;
    a = a * 2;
    b = b * 2;
    for (int p = a; p < a + 2; p++)
    {
        for (int q = b; q < b + 2; q++)
        {
            if (grid[p][q] == val)
                return false;
        }
    }
    return true;
}
bool solver(int i, vector<vector<int>> &arr, int grid[4][4])
{
    // for (int j = i; j < arr.size(); j++)
    // {
    if (i == arr.size())
        return true;
    int a = arr[i][0];
    int b = arr[i][1];
    for (int val = 1; val <= 4; val++)
    {
        if (!check(a, b, val, grid))
        {
            grid[a][b] = val;
            if (solver(i + 1, arr, grid))
            {
                return true;
            }
            else
            {
                grid[a][b] = 0;
            }
        }
    }
    return false;
    // }
}
int main()
{
    int grid[4][4] = {{1, 0, 3, 0}, {0, 0, 2, 1}, {0, 1, 0, 2}, {2, 4, 0, 0}};
    vector<vector<int>> arr;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (grid[i][j] == 0)
                arr.push_back({i, j});
        }
    }
    if (solver(0, arr, grid))
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}