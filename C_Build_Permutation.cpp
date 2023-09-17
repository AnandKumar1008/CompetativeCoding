#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, -1);
        // int a[n];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != -1)
                continue;
            int p = (int)sqrt(2 * i);
            int q = p * p;
            a[i] = (q - i);
            a[q - i] = i;
        }
        for (int &z : a)
            cout << z << " ";
        cout << endl;
    }
}