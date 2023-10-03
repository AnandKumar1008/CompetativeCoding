#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    set<int> set;
    int a[n];
    for (int &i : a)
        cin >> i, set.insert(i);
    vector<int> arr;
    for (int i = 0; i <= 2 * n + 1; i++)
    {
        if (!set.count(i))
            arr.push_back(i);
    }
    sort(a, a + n);
    int mex = arr[0];
    int i = 0;
    while (true)
    {

        cout << mex << endl
             << endl;
        int y;
        cin >> y;
        if (y == -1)
        {
            cout << flush;
            return;
        }
        else if (y < arr[i + 1])
            mex = y;
        else
            mex = arr[++i];
    }
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
