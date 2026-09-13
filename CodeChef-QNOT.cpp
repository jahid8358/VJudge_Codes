#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (n >= (2 * x) && n >= (y * 2))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}