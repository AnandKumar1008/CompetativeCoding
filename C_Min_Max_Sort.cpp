#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int nmax = 2e5 + 1;

int a[nmax], b[nmax];

void solver()

{

    ll n;

    cin >> n;

    for (int i = 1; i <= n; i++)

    {

        cin >> a[i];

        b[a[i]] = i;
    }

    int ans = (n - 1) / 2 + 1;

    int m = n + 1;

    int val = ans;

    int prev = n + 1;
    int prev2 = -1;
    for (; val >= 1; val--)

    {

        if (b[val] <= b[m - val] && b[val] < prev && prev2 < b[m - val])

            ans--;

        else

            break;

        prev = b[val];
        prev2 = b[m - val];
    }

    cout << ans << endl;
}

int main()

{

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);

    int t;

    cin >> t;

    while (t--)

        solver();
}
