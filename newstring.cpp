#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0, idx1 = n - 1, idx2 = n;
    for (int i = 1; i <= n - 1; i++)
    {
        if (sum + i >= k)
        {
            break;
        }
        idx1--;
        sum += i;
    }
    k -= sum;
    idx2 -= (k - 1);
    for (int i = 1; i <= n; i++)
    {
        if (i == idx1 || i == idx2)
            cout << "b";
        else
            cout << "a";
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
