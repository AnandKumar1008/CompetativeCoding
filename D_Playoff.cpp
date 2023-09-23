#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        else
            zero++;
    }
    ll val = (1 << n);

    for (int i = (1 << one); i <= ((1 << (n)) - (1 << zero) + 1); i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
