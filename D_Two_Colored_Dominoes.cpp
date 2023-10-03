#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m, n;
const int M = 501, N = 501;
char ch[M][N];
int c = 0;
void checkRow(int i)
{
    bool f1 = false, f2 = false;
    for (int j = 0; j < n; j++)
    {
        if (ch[i][j] == 'U')
            ch[i][j] = f1 ? 'B' : 'W', f1 = !f1, c++;
        if (ch[i][j] == 'D')
            ch[i][j] = f2 ? 'W' : 'B', f2 = !f2, c++;
    }
}
void checkCol(int i)
{

    bool f1 = false, f2 = false;

    for (int j = 0; j < m; j++)
    {
        if (ch[j][i] == 'R')
            ch[j][i] = f1 ? 'B' : 'W', f1 = !f1, c++;
        if (ch[j][i] == 'L')
            ch[j][i] = f2 ? 'W' : 'B', f2 = !f2, c++;
    }
}
void solver()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ch[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        c = 0;
        checkCol(i);
        if (c % 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        c = 0;

        checkRow(i);
        if (c % 2)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch[i][j];
        }
        cout << endl;
    }
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
