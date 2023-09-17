#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b == 0 && c == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (a == 0)
    {
        cout << 0 << endl;
        return;
    }
    int val = min(a, b + c + 1);
    cout << val + val - 1 << endl;
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