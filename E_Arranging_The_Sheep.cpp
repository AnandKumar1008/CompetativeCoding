// Brute Force
#include <bits/stdc++.h>
using namespace std;
// try efficient approach
int solution(vector<int> &v)
{
    long long minSum = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        minSum += abs(v[i] - v[n / 2]) - abs(i - n / 2);
    }
    cout << minSum << endl;
}
void minMoves()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = INT_MAX;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            v.push_back(i);
    }

        solution(v);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        minMoves();
    }
}