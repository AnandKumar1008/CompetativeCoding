#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[10] = {0, 1, 2, 3, 5, 6, 7, 8, 9};
void solver()
{
    ll n;
    cin >> n;
    vector<int> arr;
    while (n > 0)
    {
        arr.push_back(n % 9);
        n = n / 9;
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << a[arr[i]];
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
