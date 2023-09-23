// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solver()
// {
//     ll n, c, d;
//     cin >> n >> c >> d;
//     int a[n];
//     ll sum = 0;
//     for (int &i : a)
//         cin >> i;
//     ll mxSum = 0;
//     sort(a, a + n, greater<>());
//     ll presum[n];
//     presum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         presum[i] = presum[i - 1] + a[i];
//     }

//     for (int i = 0; i < min(n, d); i++)
//     {
//         sum += a[i];
//     }
//     if (sum >= c)
//     {
//         cout << "Infinity" << endl;
//         return;
//     }
//     if (1ll * d * a[0] < c)
//     {
//         cout << "Impossible" << endl;
//         return;
//     }
//     int l = 0, r = d;
//     while (l <= r)
//     {
//         ll sum2 = 0;
//         int m = (l + r) >> 1;
//         int div = (d) / (m + 1);
//         int rem = d - div * (m + 1);
//         sum2 += div * presum[m >= n ? n - 1 : m];
//         if (rem > 0)
//             sum2 += presum[(rem - 1) >= n ? n - 1 : (rem - 1)];

//         if (sum2 >= c)
//         {
//             l = m + 1;
//         }
//         else
//             r = m - 1;
//     }
//     cout << r << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solver();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int T, n, d;
long long int c;
int a[200010];
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> c >> d;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        int l = 0, r = d + 1;
        while (l < r)
        {
            int m = (r + l + 1) / 2;
            long long int ans = 0;
            for (int i = 0; i < d; i++)
            {
                if (i % m < n)
                    ans += a[i % m];
            }
            if (ans >= c)
                l = m;
            else
                r = m - 1;
        }
        if (l == 0)
            puts("Impossible");
        else if (l == d + 1)
            puts("Infinity");
        else
            cout << l - 1 << endl;
    }
    return 0;
}