#include <iostream>
#include <vector>
#include <algorithm>

struct Segment
{
    int l, r;
};

bool compareSegments(const Segment &a, const Segment &b)
{
    return a.r < b.r;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<Segment> segments(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> segments[i].l >> segments[i].r;
        }

        std::sort(segments.begin(), segments.end(), compareSegments);

        int removedCount = 0;
        int lastEnd = segments[0].r;
        for (int i = 1; i < n; ++i)
        {
            if (segments[i].l <= lastEnd)
            {
                removedCount++;
            }
            else
            {
                lastEnd = segments[i].r;
            }
        }

        std::cout << removedCount << std::endl;
    }

    return 0;
}
