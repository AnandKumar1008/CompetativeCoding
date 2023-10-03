#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    int b[n] = {};
    int a[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int arr[] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    int color = 1;
    for (int i = 1; i <= 11; i++)
    {
        bool vis = false;
        for (int j = 0; j < n; j++)
        {
            if (b[j])
                continue;

            if (a[j] % arr[i] == 0)
            {
                vis = true;
                b[j] = color;
            }
        }
        if (vis)
            color++;
    }
    cout << color - 1 << endl;
    for (int j = 0; j < n; j++)
    {
        cout << b[j] << " ";
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
