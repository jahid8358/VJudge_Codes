#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if ((y * z) < x)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}