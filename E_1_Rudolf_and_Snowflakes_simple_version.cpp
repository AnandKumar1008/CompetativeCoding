#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
            ans = ans * x;
        x = x * x;
        y = y >> 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        bool found = false;
        for (int k = 2; k <= 1000; k++)
        {
            sum = 0;
            int j = 0;
            while (sum < n)
            {
                sum += power(k, j);
                j++;
            }
            if (sum == n && j > 2)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}