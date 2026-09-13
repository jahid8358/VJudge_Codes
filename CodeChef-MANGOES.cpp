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
        int left = z - y;
        int ans = left / x;
        cout << ans << endl;
    }
    return 0;
}