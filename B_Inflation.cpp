#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == m)
        {
            q.push(x + 1000000);
        }
        else
        {
            q.push(x);
        }
    }
    int count = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        front--;
        if (front == 0 || front == 1000000)
        {
            if (front == 1000000)
            {
                break;
            }
        }
        else
        {
            q.push(front);
        }
        count++;
    }
    cout << count + 1 << endl;
}