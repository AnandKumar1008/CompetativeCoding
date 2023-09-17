#include <bits/stdc++.h>
using namespace std;
void anyPositive(int a[], int n, int mxIdx, vector<pair<int, int>> &res)
{
    a[0] = a[0] + a[mxIdx];
    res.push_back({0, mxIdx});
    for (int i = 1; i < n; i++)
    {
        // if(i==mxIdx) continue;
        if (a[i] < a[i - 1])
        {
            if (a[i] < 0)
            {

                res.push_back({i, i - 1});

                a[i] = a[i] + a[i - 1];
            }

            res.push_back({i, i - 1});

            a[i] = a[i] + a[i - 1];
        }
    }
    cout << res.size() << endl;
    for (auto &i : res)
    {
        cout << i.first + 1 << " " << i.second + 1 << endl;
    }
}

void solution(int a[], int n, vector<pair<int, int>> &res)
{

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            a[i] = a[i] + a[i + 1];
            res.push_back({i, i + 1});
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first + 1 << " " << res[i].second + 1 << endl;
    }
}
void solver()
{
    // normal solution for positive as well as negative
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    int mxIdx = 0;
    bool allNeg = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[mxIdx])
        {
            // mx = a[i];
            mxIdx = i;
        }
        if (a[i] > 0)
            allNeg = false;
    }
    vector<pair<int, int>> res;

    if (allNeg)
    {
        solution(a, n, res);
    }
    else
    {
        while (a[mxIdx] < 100)
        {
            a[mxIdx] = a[mxIdx] + a[mxIdx];

            res.push_back({mxIdx, mxIdx});
        }
        anyPositive(a, n, mxIdx, res);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}