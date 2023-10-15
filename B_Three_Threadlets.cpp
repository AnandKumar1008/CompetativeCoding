#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int c = 0;
    int top = pq.top();
    // cout << top << "top" << endl;
    while (!pq.empty() && c < 3)
    {
        int top1 = pq.top();
        if (top1 == top)
            pq.pop();
        else
        {
            // cout << top1 << "top1";
            pq.pop();
            pq.push(top1 - top);
            c++;
        }
    }
    while (!pq.empty() && pq.top() == top)
    {
        pq.pop();
    }

    cout << (pq.empty() ? "YES" : "NO") << endl;
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
