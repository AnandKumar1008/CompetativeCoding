#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solver()
{
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> v(27, 0), v1(26, 0);
    for (int i = 0; i < n; i++)
    {
        v[a[i] - 'a']++;

        v1[b[i] - 'a']++;
    }
    bool bad = false;

    for (int i = 0; i < 26; i++)
    {
        if (v[i] < v1[i] || (v[i] -= v1[i]) % k)
            bad = 1;
        v[i + 1] += v[i];
    }
    return !bad;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        if (solver())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}