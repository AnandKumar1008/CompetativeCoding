#include <bits/stdc++.h>
using namespace std;

bool isVowel(char &c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    string s;
    cout << "Enter Any String To See its Graph" << endl;
    cin >> s;
    int sum = 0;
    int n = s.size();
    int peak = INT_MAX, peak2 = 0;
    vector<int> nums(n);
    int mx = INT_MIN, mn = INT_MAX;
    int colm = 20;
    for (int i = 0; i < s.size(); i++)
    {
        if (isVowel(s[i]))
        {
            sum -= (s[i] - 'a' + 1);
            colm += (s[i] - 'a' + 1);
            nums[i] = -(s[i] - 'a' + 1);
        }

        else
        {
            sum += (s[i] - 'a' + 1);
            colm += (s[i] - 'a' + 1);
            nums[i] = (s[i] - 'a' + 1);
        }
        if (i > 0 && isVowel(s[i]) && isVowel(s[i - 1]))
            sum -= 2;
        if (i > 0 && !isVowel(s[i]) && !isVowel(s[i - 1]))
            sum += 2;
        mx = max(mx, sum);
        mn = min(mn, sum);
    }
    sum = mx - mn;
    int side = 2 * (mx - mn + 10) + 5;
    vector<vector<char>> arr(side, vector<char>(colm, ' '));
    int i = sum + 20, j = 0;

    for (int k = 0; k < n; k++)
    {
        if (k > 0 && nums[k] < 0 && nums[k - 1] < 0)
        {
            i++;
            arr[i++][j] = '|';
            arr[i++][j] = '|';
        }
        if (k > 0 && nums[k] > 0 && nums[k - 1] > 0)
        {
            i--;
            arr[i--][j] = '|';
            arr[i--][j] = '|';
        }
        int val = nums[k];
        if (val > 0)
        {
            while (val-- > 0)
                arr[i--][j++] = '/';
            i++;
        }

        else if (val < 0)
        {
            while (val++ < 0)
                arr[i++][j++] = '\\';

            i--;
        }

        if (i < peak)
        {
            peak = i;
            peak2 = j;
        }
    }
    arr[peak - 1][peak2] = '<';
    arr[peak - 1][peak2 + 2] = '>';
    arr[peak - 2][peak2] = '/';
    arr[peak - 3][peak2 + 1] = 'o';
    arr[peak - 2][peak2 + 2] = '\\';
    arr[peak - 2][peak2 + 1] = '|';

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
