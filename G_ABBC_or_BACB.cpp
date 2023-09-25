#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    string s;
    cin >> s;
    int a = 0, b = 0;
    int A = 0;
    int mn = INT_MAX;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            if (!sum)
                a++;
            A++;
            sum++;
        }
        else
            mn = min(mn, sum), sum = 0, b++;
    }
    if (sum)
        mn = min(mn, sum);

    cout << ((b >= a) ? A : (A - mn)) << endl;
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
