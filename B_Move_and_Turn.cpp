#include <bits/stdc++.h>
using namespace std;
int a[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main()
{
    unordered_map<int, int> um;
    um[2]++;
    um[3]++;
    // um.insert(100);
    cout << um.begin()->first << endl;
}