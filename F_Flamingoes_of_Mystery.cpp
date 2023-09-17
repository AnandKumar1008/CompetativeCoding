#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 2; i <= n; i++)
    {
        cout << "? " << 1 << " " << i << endl;
        cout << flush;
        int x;
        cin >> x;
        a[i] = x;
    }
    cout << "? " << 2 << " " << 3 << endl;
    int sum;
    cin >> sum;
    cout << flush;
    a[1] = a[3] - sum;
    cout << "! ";
    for (int i = 1; i <= n; i++)
        cout
            << (a[i] - (i == 1 ? 0 : a[i - 1])) << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solver();
}