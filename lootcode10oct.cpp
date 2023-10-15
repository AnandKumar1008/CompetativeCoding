#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solution(int space, int k, vector<int> &arr, int count, int prev, int large, vector<int> &store)
{

    if (count == space && large == k)
    {
        for (int &i : store)
            cout << i << " ";
        cout << endl;
        return 1;
    }
    if (large > k)
        return 0;
    if (count >= space)
        return 0;
    int ans = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] > prev)
        {
            store.push_back(arr[j]);
            ans += solution(space, k, arr, count + 1, arr[j], large + 1, store);
            store.pop_back();
        }
        else
        {
            store.push_back(arr[j]);
            ans += solution(space, k, arr, count + 1, prev, large, store);
            store.pop_back();
        }
    }
    return ans;
}

void solver()
{
    vector<int> store;
    vector<int> arr = {1, 2, 3};
    int k = 2;
    int space = 3;
    cout << solution(space, k, arr, 0, -1, 0, store) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solver();
    // }
}
