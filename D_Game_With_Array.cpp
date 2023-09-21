#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, S;
    cin >> n >> S;
    if (S < 2 * n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << S - 2 * (n - 1) << endl;
        cout << 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solver();
}
