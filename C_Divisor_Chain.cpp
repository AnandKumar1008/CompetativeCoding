#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    vector<int> arr;
    while ((n & (n - 1)))
    {
        arr.push_back(n);
        n = n - (n & (~n + 1));
    }
    while (n)
    {
        arr.push_back(n);
        n = n >> 1;
    }
    cout << arr.size() << endl;
    for (int &i : arr)
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
