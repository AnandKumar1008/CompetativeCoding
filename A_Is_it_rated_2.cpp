#include <iostream>
#include <string>
using namespace std;
int main()
{
    while (true)
    {
        string input;
        if (!(cin >> input))
        {
            if (cin.eof())
            {
                break; // Exit the loop on EOF
            }
            else
            {
                // Handle other errors (optional)
                cerr << "Error reading input." << endl;
                break;
            }
        }
        cout << "no" << endl;
        cout.flush();
    }
    return 0;
}
