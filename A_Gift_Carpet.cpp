#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solver()
{
    int a, b;
    cin >> a >> b;
    string arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    string str = "vika";
    int start = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            if (arr[i][j] == str[start])
            {
                start++;
                break;
            }
        }
        if (start == 4)
            return true;
    }
    return false;
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

        if (solver())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}