#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    int a[12] = {1, 4, 3, 2, 5, -1, 0, 12, 31, 35, 64, 31};
    for (int i = 1; i < 12; i++)
    {
        int temp = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] >= a[j])
            {
            }
            else
            {
                for (int k = i; k > j; k--)
                {
                    a[k] = a[k - 1];
                }
                // swap(a[j], a[j]);
                a[j] = temp;

                break;
            }
        }
    }
    for (int &z : a)
        cout << z << " ";
}