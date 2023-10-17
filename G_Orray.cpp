#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    vector<int> v;
    int num = 0;
    for (int i = 31; i >= 0; i--)
    {
        int idx = -1;
        int mx = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == -1)
                continue;
            if ((num | a[j]) > mx)
            {
                mx = num | a[j];
                idx = j;
            }
        }
        if (idx != -1)
        {
            v.push_back(a[idx]);
            a[idx] = -1;
        }

        num = mx;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] != -1)
            cout << a[j] << " ";
    }
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
