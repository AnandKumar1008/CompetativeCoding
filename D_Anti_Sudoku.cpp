#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    char v[10][10];
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cin >> v[i][j];
        }
    }
    int b[] = {1, 4, 7, 2, 5, 8, 3, 6, 9};

    for (int k = 1, j = 0; k <= 9; k++, j++)
    {

        if (v[k][b[j]] == '9')
            v[k][b[j]] = '1';
        else
            v[k][b[j]]++;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << v[i][j];
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
