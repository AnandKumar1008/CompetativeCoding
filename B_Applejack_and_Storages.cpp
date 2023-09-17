#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 2e5;
int a[maxn];
void solver()
{
    int n, x;
    char type;
    cin >> n;
    int cnt2 = 0, cnt4 = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        cnt2 -= a[x] / 2;
        cnt4 -= a[x] / 4;
        a[x]++;
        cnt2 += a[x] / 2;
        cnt4 += a[x] / 4;
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> type >> x;
        cnt2 -= a[x] / 2;
        cnt4 -= a[x] / 4;
        if (type == '+')
            a[x]++;
        else
            a[x]--;
        cnt2 += a[x] / 2;
        cnt4 += a[x] / 4;
        if (cnt4 >= 1 && cnt2 >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solver();
}