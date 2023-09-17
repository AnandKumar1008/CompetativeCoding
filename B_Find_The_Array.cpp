#include <bits/stdc++.h>
using namespace std;

void method2()
{
    int n;
    cin >> n;
    int a[n];
    long long sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            sum += a[i];
        else
            sum2 += a[i];
    }
    bool flag = true;
    if (sum < sum2)
    {
        flag = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (flag)
            cout << a[i] << " ";
        else
            cout << 1 << " ";
        flag = !flag;
    }

    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // solver();
        method2();
    }
}