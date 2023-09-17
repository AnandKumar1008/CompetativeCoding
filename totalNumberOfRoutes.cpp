#include <bits/stdc++.h>
using namespace std;
int binary(int target, vector<int> &a)
{
    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        int m = (l + r) >> 1;
        if (a[m] == target)
            return m;
        else if (a[m] > target)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}
int solver(int start, int finish, int fuel, vector<int> &arr)
{
    if (fuel <= 0)
        return 0;
    int val = fuel;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != start)
        {
            val = fuel - abs(start - arr[i]);
            if (val >= abs(arr[i] - finish))
            {
                int num = binary(finish, arr) - i - 1;
                if (num >= 0)
                {

                    ans += pow(2, num) + solver(arr[i], finish, val - abs(arr[i] - finish), arr);
                    // cout << num << "num" << arr[i] << endl;
                }
            }
        }
    }
    return ans;
}
int count(int start, int finish, int fuel, vector<int> &arr)
{

    start = arr[start];
    finish = arr[finish];
    sort(arr.begin(), arr.end());
    return solver(start, finish, fuel, arr);
}
int main()
{
    int n;
    cin >> n;
    // int a[5]={2,3,6,8,4};

    vector<int> a(n);
    for (int &z : a)
        cin >> z;
    cout << count(1, 3, 5, a) + 1 << endl;
}