#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    string str;
    int r = 0, s = 0, p = 0;
    cin >> str;
    int n = str.size();
    for (char &ch : str)
    {
        if (ch == 'R')
            r++;
        else if (ch == 'S')
            s++;
        else if (ch == 'P')
            p++;
    }
    int mx = max(r, max(s, p));
    char ch;
    if (mx == r)
        ch = 'P';
    else if (mx == s)
        ch = 'R';
    else
        ch = 'S';
    for (int i = 0; i < n; i++)
    {
        cout << ch;
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