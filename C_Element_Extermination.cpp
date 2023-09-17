#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<string> a(42), b(42);
    for (int i = 0; i < 42; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 42; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 42; i++)
    {
        if (a[i] != b[i])
        {
            cout << i << endl;
            cout << a[i] << endl;
        }
    }
}