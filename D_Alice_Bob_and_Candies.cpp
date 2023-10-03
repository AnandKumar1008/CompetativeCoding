#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solver()
{
    ll n;
    cin >> n;
    int nums[n];
    for (int &i : nums)
        cin >> i;

    ll sum1 = 0, sum2 = 0, alice = nums[0], bob = 0, l = 1, r = n - 1;
    ll move = 1;
    while (l <= r)
    {

        while (bob <= alice && l <= r)
        {
            bob += nums[r--];
        }
        move++;
        sum1 += alice;
        alice = 0;
        if (l > r)
            break;
        while (l <= r && alice <= bob)
        {
            alice += nums[l++];
            /* code */
        }
        sum2 += bob;
        bob = 0;
        move++;
    }
    sum1 += alice;
    sum2 += bob;
    cout << move << " " << sum1 << " " << sum2 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
}
