#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    string s;
    cin >> s;
    int n = s.size();
    string one = "one", two = "two", twone = "twone";
    set<int> set, set2;
    for (int i = 0; i < n - 2; i++)
    {
        string str = s.substr(i, 3);
        string str2 = s.substr(i, 5);
        if (str == one || str == two)
            set.insert(i + 1);
        if (str2 == twone)
            set2.insert(i + 2);
    }
    cout << set.size() - set2.size() << endl;
    for (auto &i : set)
    {
        if (set2.count(i + 1) || set2.count(i - 1))
            continue;
        cout << i + 1 << " ";
    }
    for (auto &i : set2)
        cout << i + 1 << " ";
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
