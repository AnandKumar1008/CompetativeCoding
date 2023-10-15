#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    while (s1.size() <= 2 * s2.size())
    {
        if (s1.find(s2) != string::npos)
        {
            cout << count << endl;
            return;
        }
        s1 += s1;
        count++;
    }
    if (s1.find(s2) != string::npos)
    {
        cout << count << endl;
        return;
    }

    s1 += s1;
    count++;
    if (s1.find(s2) != string::npos)
    {
        cout << count << endl;
        return;
    }

    cout << -1 << endl;
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
