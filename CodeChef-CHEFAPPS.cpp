#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        int left = s - (x + y);

        if (left >= z)
            cout << "0\n";
        else if ((left + x) >= z || (left + y) >= z)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}