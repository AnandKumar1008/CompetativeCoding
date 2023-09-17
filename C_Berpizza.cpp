#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> customers; // Pair format: (money, order)
    set<pair<int, int>> byId;         // Sorted by ID
    set<pair<int, int>> byMoney;      // Sorted by money

    int order = 1;

    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;
            customers.push_back({money, order});
            byId.insert({order, money});
            byMoney.insert({money, -order});
            order++;
        }
        else if (type == 2)
        {

            pair<int, int> customer = *byId.begin();
            cout << customer.first << " ";
            byId.erase(customer);
            byMoney.erase({customer.second, -customer.first});
        }
        else if (type == 3)
        {
            pair<int, int> customer = *byMoney.rbegin();
            cout << -customer.second << " ";
            byId.erase({-customer.second, customer.first});
            byMoney.erase(customer);
        }
    }

    return 0;
}
