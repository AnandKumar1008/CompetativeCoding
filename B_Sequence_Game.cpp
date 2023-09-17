#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    vector<int> res;
    res.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            res.push_back(a[i]);
        else
        {
            res.push_back(1);
            res.push_back(a[i]);
        }
    }
    cout << res.size() << endl;
    for (int &i : res)
    {
        cout << i << " ";
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