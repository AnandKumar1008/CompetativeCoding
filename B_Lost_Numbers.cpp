#include <bits/stdc++.h>
using namespace std;
#define ll long long
int getnum(vector<int> &store, int p, int q)
{
    int a[6] = {4, 8, 15, 16, 42, 23};
    vector<vector<int>> arr;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            arr.push_back({a[i] * a[j], a[i], a[j]});
        }
    }

    map<int, int> res;
    int gcd1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (store[p] == arr[i][0] || store[q] == arr[i][0])
        {
            // cout << arr[i][1] << " " << arr[i][2] << endl;
            res[arr[i][1]]++;
            res[arr[i][2]]++;
            if (res[arr[i][1]] == 2)
                gcd1 = arr[i][1];
            if (res[arr[i][2]] == 2)
                gcd1 = arr[i][2];
        }
    }
    return gcd1;
}
void solver()
{

    int query[][4] = {{1, 2}, {2, 3}, {4, 5}, {5, 6}};
    vector<int> store;

    for (int i = 0; i < 4; i++)
    {
        cout << "? " << query[i][0] << " " << query[i][1] << endl;
        cout << flush;
        int x;
        cin >> x;
        store.push_back(x);
    }
    int gcd1 = getnum(store, 0, 1);
    int gcd2 = getnum(store, 2, 3);
    cout << "! " << store[0] / gcd1 << " " << gcd1 << " " << store[1] / gcd1 << " " << store[2] / gcd2 << " " << gcd2 << " " << store[3] / gcd2 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solver();
}