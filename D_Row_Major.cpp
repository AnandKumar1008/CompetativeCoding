#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solver()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    int start = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] == 1)
            start++;
        else
            break;
    }
    start += 1;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cout << (char)(j++ % start + 'a');
    }
    cout << endl;
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