#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto &it : mp)
        {
            pq.push(it.second);
        }
        while (pq.size() > 1)
        {
            int top = pq.top();
            pq.pop();
            top--;
            int top2 = pq.top();
            pq.pop();
            top2--;
            if (top > 0)
                pq.push(top);
            if (top2 > 0)
                pq.push(top2);
        }
        cout << (pq.empty() ? 0 : pq.top()) << endl;
    }
}