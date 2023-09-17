#include <bits/stdc++.h>
using namespace std;

// int freq[100001];
int main()
{
    int t = 8;
    while (t--)
    {
        int n = rand() % 100;
        cout << '[';
        for (int i = 0; i < n - 1; i++)
        {
            cout << rand() % 10000 + 1 << ",";
        }
        cout << "5]"
             << "\n[";
        for (int i = 0; i < n - 1; i++)
        {
            cout << rand() % 10000 + 1 << ",";
        }
        cout << "51]" << endl;
    }
}