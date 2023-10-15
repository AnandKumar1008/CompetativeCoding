#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    vector<string> v(n);
    bool allEven = true;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < v[i].size(); j++)
            if (v[i][j] == '1')
                c++;
        if (v[i].size() % 2)
            allEven = false;
    }
    if (allEven && c % 2)
        cout << n - 1 << endl;
    else
        cout << n << endl;
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
