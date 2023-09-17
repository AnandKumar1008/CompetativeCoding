
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    string A, B, C, D;
    for (cin >> t; t; t--)
    {
        cin >> a >> b >> c >> d;
        A = B = C = D = "Ya";
        if (a + b & 1)
            C = D = "Tidak";
        else
            A = B = "Tidak";
        if (a + d == 0)
            A = D = "Tidak";
        if (b + c == 0)
            B = C = "Tidak";
        cout << A << ' ' << B << ' ' << C << ' ' << D << endl;
    }
}