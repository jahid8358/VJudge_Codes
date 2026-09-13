#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a;
        cin >> x >> y >> z >> a;
        if ((x + y) >= a || (x + z) >= a || (y + z) >= a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}