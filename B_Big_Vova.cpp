#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    int a[n];
    for (int &it : a)
        cin >> it;
    int res[n];
    sort(a, a + n, greater<>());
    res[0] = a[0];
    int gcdF, gcd;
    gcdF = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        // int val=a[i];
        int reqVal = i;
        gcd = gcdF;
        int curr = 1;
        int mx = 1;
        for (int j = i + 1; j < n; j++)
        {
            // if(a[j]==-1) continue;
            curr = __gcd(a[j], gcd);
            if (curr >= mx)
            {
                mx = curr;
                reqVal = j;
                // gcd = gcdF;
            }
        }
        gcdF = mx;
        swap(a[i + 1], a[reqVal]);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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