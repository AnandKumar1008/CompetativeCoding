#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 1e6 + 1;
bool prime[nmax + 1];

void solver()
{
    ll n;
    cin >> n;
    ll ans = 1;
    int a[n];
    for (int &i : a)
        cin >> i;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int factor = 2;

        while (a[i] > 1)
        {
            if (!prime[a[i]])
                break;
            if (a[i] % factor == 0)
                while (a[i] % factor == 0)
                {
                    mp[factor]++;
                    a[i] /= factor;
                }
            else
            {
                factor++;
            }
        }
        if (a[i] > 1)
            mp[a[i]]++;
    }
    bool allEven = true;
    for (auto &i : mp)
    {
        if (i.second % n != 0)
        {
            allEven = false;
            break;
        }
    }
    if (allEven)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    for (int i = 2; i * i <= nmax; i++)
    {
        if (!prime[i])
            for (int j = i * i; j <= nmax; j += i)
            {
                prime[j] = 1;
            }
    }
    prime[0] = 1;
    prime[1] = 1;
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
