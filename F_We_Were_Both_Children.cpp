#include <bits/stdc++.h>
using namespace std;

int freq[100001];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i, freq[i]++;
    stack<int> st;
    int res[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && freq[st.top()] <= freq[a[i]])
            st.pop();
        res[i] = st.empty() ? -1 : st.top();
        st.push(a[i]);
    }
    for (int &i : res)
        cout << i << " ";
}