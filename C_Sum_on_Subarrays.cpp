#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(int n, int k)
{
    if (n == 0)
    {
        return vector<int>();
    }
    if (k < n)
    {
        vector<int> a(n, -1);
        if (k > 0)
        {
            a[k - 1] = 200;
        }
        a[k] = -400;
        return a;
    }
    else
    {
        vector<int> a = solve(n - 1, k - n);
        a.push_back(1000);
        return a;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> b = solve(n, k);
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
