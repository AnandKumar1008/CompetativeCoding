#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solver(ll n)
{

    ll sum = 0;
    while (n > 0)
        sum += n,
            n = n / 2;

    return sum;
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
        ll n;
        cin >> n;
        cout << solver(n) << endl;
    }
}
