#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, extra = 0;
        cin >> x >> y >> z;

        if ((x * y) <= z)
            cout << "0\n";
        else
        {
            extra = (x * y) - z;

            if (extra % y == 0)
                cout << extra / y << endl;
            else
                cout << extra / y + 1 << endl;
        }
    }

    return 0;
}