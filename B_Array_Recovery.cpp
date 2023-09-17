#include <bits/stdc++.h>
using namespace std;
int n;
void allArrangement(vector<int> &cookies, int i, vector<vector<int>> &all)
{
    if (i >= cookies.size())
    {
        all.push_back(cookies);
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(cookies[i], cookies[j]);
        allArrangement(cookies, i + 1, all);
        swap(cookies[i], cookies[j]);
    }
}
int solver(int k, vector<int> &permut, int j)
{
    int sum = 0;
    if (k == 1)
    {
        for (int i = j; i < n; i++)
        {
            sum += permut[i];
        }
        return sum;
    }
    int ans = INT_MAX;
    // visited[j]=1
    for (int i = j; i < n; i++)
    {
        sum += permut[i];
        ans = min(max(sum, solver(k - 1, permut, i + 1)), ans);
    }
    return ans;
}
int main()
{
    n = 8;
    //     [8,15,10,20,8]
    // 2
    vector<int> v = {6, 1, 3, 2, 2, 4, 1, 2};
    vector<vector<int>> all;
    allArrangement(v, 0, all);
    int ans = INT_MAX;
    int k = 3;
    for (int i = 0; i < all.size(); i++)
    {
        ans = min(ans, solver(k, all[i], 0));
        // cout << solver(k, all[i], 0) << endl;
    }
    cout << ans << endl;
}