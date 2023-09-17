#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool checker(int val)
{
    if (val % 2 == 1)
    {

        if (val > 1 && val % 2 == 1 || val == 2)
        {
            cout << "FastestFinger" << endl;
        }
        else
            cout << "Ashishgup" << endl;
        return true;
    }
    return false;
}
void solver()
{
    int n;
    cin >> n;
    // int c = 0;
    if ((n > 1 && n % 2 == 1 || n == 2))
    {
        cout << "Ashishgup" << endl;
        return;
    }
    for (int i = 0; i < 31; i++)
    {
        if (n == (1 << i))
        {
            cout << "FastestFinger" << endl;
            return;
        }
    }
    int c = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            if (i == n / i)
                c++;
            else
                c += 2;
        }
    }
    if (c >= 3)
    {
        cout << "Ashishgup" << endl;
    }
    else
    {
        cout << "FastestFinger" << endl;
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
