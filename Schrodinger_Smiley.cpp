#include <bits/stdc++.h>
using namespace std;
void solver()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == ':')
        {
            bool gone = false;
            while (s[i] == ':')
                i++;
            // i++;
            while (s[i] == ')')
            {
                i++;
                gone = 1;
            }
            // cout << s[i] << endl;
            if (gone && s[i] == ':')
            {
                ans++;
                // cout << "here";
                i--;
            }
        }
        // while(s[i]==')') i++;

        i++;
    }
    cout << ans << endl;
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