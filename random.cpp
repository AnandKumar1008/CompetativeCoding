#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n = (rand() * rand()) % 500;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ((rand()) % 9) + 1 << " ";
    }
}