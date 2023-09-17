#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, U, R, D, L;
        cin >> n >> U >> R >> D >> L;

        for (int mask = 0; mask < 16; mask++)
        {
            int rU = U, rR = R, rD = D, rL = L;

            if (mask & 1)
            {
                rU -= 1;
                rL -= 1;
            }
            if (mask & 2)
            {
                rL -= 1;
                rD -= 1;
            }
            if (mask & 4)
            {
                rD -= 1;
                rR -= 1;
            }
            if (mask & 8)
            {
                rR -= 1;
                rU -= 1;
            }

            if (min(min(rU, rR), min(rD, rL)) >= 0 && max(max(rU, rR), max(rD, rL)) <= n - 2)
            {
                cout << "YES" << endl;
                break;
            }
            if (mask == 15)
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
