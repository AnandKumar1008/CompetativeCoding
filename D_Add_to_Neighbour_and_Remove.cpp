#include <bits/stdc++.h>
using namespace std;
#define ll long long

void method2()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (sum % i != 0)
            continue;
        ll needSum = sum / i;
        ll currSum = 0;
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            currSum += a[j];
            if (currSum > needSum)
            {
                ok = false;
                break;
            }
            else if (currSum == needSum)
            {
                currSum = 0;
            }
        }
        if (ok)
        {
            cout << n - i << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        method2();
    }
}