#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    ll sum = 0, other = 0;
    while (n > 0)
    {
        if (n > 4 && n % 4 == 0)
        {
            sum += 1;
            n--;
        }
        else if (n % 2 == 0)
        {
            sum += n / 2;
            n = n / 2;
        }
        else
        {
            sum++;
            n--;
        }

        if (n > 4 && n % 4 == 0)
        {
            other++;
            n--;
        }
        else if (n % 2 == 0)
        {
            other += n / 2;
            n = n / 2;
        }
        else
            other++, n--;
    }
    cout << sum << endl;
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