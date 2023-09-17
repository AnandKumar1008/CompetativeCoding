#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    sort(even.begin(), even.end());
    int j = 0, k = 0;
    bool no = 0;
    sort(odd.begin(), odd.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            a[i] = even[j++];
        else
            a[i] = odd[k++];
        if (i != 0 && a[i] < a[i - 1])
        {
            no = 1;
            break;
        }
    }
    if (no)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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