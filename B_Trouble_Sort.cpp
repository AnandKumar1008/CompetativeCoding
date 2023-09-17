#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        std::vector<int> b(n);

        for (int i = 0; i < n; ++i)
        {
            std::cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            std::cin >> b[i];
        }

        bool has_zeros = false;
        bool has_ones = false;

        for (int i = 0; i < n; ++i)
        {
            if (b[i] == 0)
            {
                has_zeros = true;
            }
            else
            {
                has_ones = true;
            }
        }

        if (std::is_sorted(a.begin(), a.end()) || (has_zeros && has_ones))
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
