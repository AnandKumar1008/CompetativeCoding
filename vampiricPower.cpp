#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max_strength = 0, current_strength = 0;
        for (int i = 0; i < n; i++)
        {
            current_strength ^= a[i];
            max_strength = max(max_strength, current_strength);
        }
        cout << max_strength << endl;
    }
    return 0;
}
