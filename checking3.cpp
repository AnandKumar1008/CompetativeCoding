#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> myMap;
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Charlie"] = 35;

    for (const auto &[key, value] : myMap)
    {
        cout << "Key: " << key << ", Value: " << value << endl;
    }

    return 0;
}
