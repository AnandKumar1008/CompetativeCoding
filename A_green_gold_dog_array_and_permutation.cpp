#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    // int a[n];for(int&i:a) cin>>i;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = {x, i};
    }
    sort(arr, arr + n);
    int res[n];
    for (int i = n - 1, k = 1; i >= 0; i--)
    {
        res[arr[i].second] = k++;
    }
    for (int &i : res)
        cout << i << " ";
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