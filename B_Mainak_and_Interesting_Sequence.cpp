#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m < n)
        {
            cout << "NO" << endl;
            continue;
        }
        if (n % 2 == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << m - n + 1 << endl;
        }
        else
        {
            if (m % 2 == 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < n - 2; i++)
                {
                    /* code */
                    cout << 1 << " ";
                }

                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}