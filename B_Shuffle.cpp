#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, m;
        cin >> n >> x >> m;

        int leftmost = x, rightmost = x;
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;

            if (l <= rightmost && r >= leftmost)
            {
                leftmost = min(leftmost, l);
                rightmost = max(rightmost, r);
            }
        }

        cout << rightmost - leftmost + 1 << endl;
    }

    return 0;
}
