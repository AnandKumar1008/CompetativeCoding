#include <bits/stdc++.h>
// go for the worst case solution
using namespace std;

// time complexity is O(n^2)
void solver()
{
    int a, b, k;
    cin >> a >> b >> k;
    int arr[k];
    int brr[k];
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
        cin >> brr[i];
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr[i] != arr[j] && brr[i] != brr[j])
                ans++;
        }
    }
    cout << ans << endl;
}
// time complexity is of O(n)
void solution()
{
    int a, b, k;
    cin >> a >> b >> k;
    int arr[a + 1] = {0}, brr[b + 1] = {0};
    pair<int, int> p[k];
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
        p[i].first = x;
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        brr[x]++;
        p[i].second = x;
    }
    long long ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += k - arr[p[i].first] - brr[p[i].second] + 1;
    }
    cout << ans / 2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
        // solver();
    }
}