#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
vector<vector<pair<int, int>>> res;
void solver(string &s, int i, vector<pair<int, int>> &v)
{
    if (i >= s.size())
    {
        res.push_back(v);
    }
    ll sum = 0;
    for (int j = 1; j <= s.size(); j++)
    {
        if (i + j > s.size())
            break;
        v.push_back({i, j});
        solver(s, i + j, v);
        v.pop_back();
    }
}
int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        vector<pair<int, int>> v;
        string s = to_string(n);

        solver(s, 0, v);
        ll sum = 0;
        for (auto &v : res)
        {
            for (auto &z : v)
            {
                sum += stoi(s.substr(z.first, z.second));
            }
        }
        cout << sum << endl;
    }
    return 0;
}